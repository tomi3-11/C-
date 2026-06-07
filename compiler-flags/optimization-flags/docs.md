# Optimization Flags
Optimization affects performance.

### -O0
No optimization.
```sh
gcc main.c -O0
```
Best for debugging.

### -O1
Basic optimization.
```sh
gcc main.c -O1
```

### -O2
Recommended general-purpose optimization.
```sh
gcc main.c -O2
```
Moat production software uses this.

### -O3
Aggressive optimization.
```sh
gcc main.c -O3
```
Can increase speed. <br>
Can also increase binary size.

### -Os
Optimize for size.
```sh
gcc main.c -Os
```
Useful for:
- Embedded systems
- Small containers

### -Ofast
Very aggressive optimization
```sh
gcc main.c -Ofast
```
May break strict standards compliance. <br>
Use carefully.
