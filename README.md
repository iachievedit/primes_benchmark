# primes_benchmark
Finding Primes for Benchmarks

This repository is based upon @brucehoult's `prime` application, which is described best by him:

```
// Program to count primes. I wanted something that could run in 16 KB but took enough
// time to measure on a modern x86 and is not susceptible to optimizer tricks.
// Code size is for just the countPrimes() function with gcc -O.
//
// Higher opt level is not allowed, but tune or align flags may be added. I've made an
// exception for Elbrus, only because the difference is so dramatic. It is generally not
// for other CPUs.
```
