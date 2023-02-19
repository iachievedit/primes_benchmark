# primes_benchmark
Finding Primes for Benchmarks

This repository is based upon [@brucehoult's](https://github.com/brucehoult) `prime` application, which is described best by him:

```
// Program to count primes. I wanted something that could run in 16 KB but took enough
// time to measure on a modern x86 and is not susceptible to optimizer tricks.
// Code size is for just the countPrimes() function with gcc -O.
//
// Higher opt level is not allowed, but tune or align flags may be added. I've made an
// exception for Elbrus, only because the difference is so dramatic. It is generally not
// for other CPUs.
```

|Time (seconds) | System | Architecture | Processor @ Speed | Size (bytes) |
|----|----|----|---|---
| 18.950 | [HiFive Unmatched](https://www.sifive.com/boards/hifive-unmatched) | `riscv64` | SiFive U74 @ 1.5 GHz | 236 |
