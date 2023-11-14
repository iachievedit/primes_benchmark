// Copyright 2023 iAchieved.it, LLC
// Copyright 2016-2022 Bruce hoult bruce@hoult.org
//
// Permission is hereby granted, free of charge, to any person obtaining a copy of
// this software and associated documentation files (the "Software"), to deal in
// the Software without restriction, including without limitation the rights to
// use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
// of the Software, and to permit persons to whom the Software is furnished to do
// so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
// INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
// PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
// HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
// OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
// SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//
// See primes.txt for original Bruce Hoult comments.

#include <stdio.h>
#include <time.h>
#include <stdint.h>

#define SZ 1000
int32_t primes[SZ], sieve[SZ];
int nSieve = 0;

int32_t countPrimes(){
  primes[0] = 2; sieve[0] = 4; ++nSieve;
  int32_t nPrimes = 1, trial = 3, sqr=2;
  while (1){
    while (sqr*sqr <= trial) ++sqr;
    --sqr;
    for (int i=0; i<nSieve; ++i){
      if (primes[i] > sqr) goto found_prime;
      while (sieve[i] < trial) sieve[i] += primes[i];
      if (sieve[i] == trial) goto try_next;
    }
    break;
  found_prime:
    if (nSieve < SZ){
      primes[nSieve] = trial;
      sieve[nSieve] = trial*trial;
      ++nSieve;
      // printf("Saved %d: %d\n", nSieve, trial);
    }
    ++nPrimes;
  try_next:
    trial+=1;
  }
  return nPrimes;
}

int main(){
  printf("Starting run\n");
  clock_t start = clock();
  int res = countPrimes();
  int ms = (clock() - start) / (CLOCKS_PER_SEC / 1000.0) + 0.5;
  // Size calculation does not work if opt >1 or if compiler or linker
  // otherwise reorders functions in the binary.
  int codeSz = (char*)main - (char*)countPrimes;
  printf("%d primes found in %d ms\n", res, ms);
  printf("%d bytes of code in countPrimes()\n", codeSz);
  return 0;
}
