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
| 2.458 | Apple Macbook Pro M3 Max | `arm64` | Apple Silicon M3 @ 4 GHz | 260 |
| 2.957 | Apple Macbook Pro M1 | `arm64` | Apple Silicon M1 @ 3.2 GHz | 264 |
| 9.498 | [Raspberry Pi 4 Model B](https://www.raspberrypi.com/products/raspberry-pi-4-model-b/) | `armv7l` | Broadcom BCM2711 @ 2 GHz | 300 |
| 14.623 | [BeagleBoard X15](https://beagleboard.org/x15) | `armv7l` |  TI Sitara AM5728 @ 1.5GHz | 228 |
| 15.092 | [Pine64 Star64](https://wiki.pine64.org/wiki/STAR64) | `riscv64` | SiFive U74 @ 1.5GHz | 236 |
| 15.134 | [StarFive VisionFive 2](https://www.starfivetech.com/en/site/boards) | `riscv64` | SiFive U74 @ 1.5 GHz | 216 |
| 18.950 | [HiFive Unmatched](https://www.sifive.com/boards/hifive-unmatched) | `riscv64` | SiFive U74 @ 1.5 GHz | 236 |
| 22.638 | [StarFive VisionFive](https://www.starfivetech.com/en/site/boards) | `riscv64` | SiFive U74 @ 1 GHz| 208 |
| 23.337 | Raspberry Pi 3 | `aarch64` | Broadcom @ ? | 256 |
| 23.925 | [BeaglePlay](https://beagleboard.org/play) | `aarch64` |TI Sitara AM625 @ 1.4 GHz|  256 |
| 37.130 | Sipeed RV Dock | `riscv64` | Allwinner D1 (XuanTie C906) @ 1.0 GHz | 236 |


