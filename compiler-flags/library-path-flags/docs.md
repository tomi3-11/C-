# Library Path Flags
`-L` <br>
Add Library directory.
```sh
gcc main.c -Llibs
```
---

`-l` <br>
Link library.
```sh
gcc main.c -lm
```
Links math library.

Example:
```c
#include <math.h>

sqrt(25);
```
Requires:
```sh
gcc main.c -lm
```
