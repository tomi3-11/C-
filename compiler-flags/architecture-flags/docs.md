# Architecture Flags
Native CPU optimization
```sh
-march=native
```
Compiler uses CPU-specific instructions.

Example:
```sh
gcc main.c -O2 -march=native
```
Can improve performance.
