CC := gcc

primes_benchmark:
	$(CC) -O1 primes.c -o primes_benchmark

clean:
	rm primes_benchmark

.PHONY:	clean
