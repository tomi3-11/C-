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
Output:
```sh
❯ gcc main.c -lm
main.c:3:6: error: expected declaration specifiers or ‘...’ before numeric constant
    3 | sqrt(25);
      |      ^~

```
