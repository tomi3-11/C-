# Essential Development Flags

`-Wall` <br>
Enables common warnings.
```sh
gcc main.c -Wall
```
Example:
```c
int main() {
    int x;
    return 0;
}
```
Produces:
```sh
warning: unused variable 'x'
```
Without `-Wall`, you may never notice.

---

`-Wextra` <br>
Enables additional warnings
```sh
gcc main.c -Wall -Wextra
```
Many projects use:
```sh
-Wall -Wextra
```
as the minimum warning level.

---
`-Werror` <br>
`-Werror`
Turns warnings into errors.
```sh
gcc main.c -Wall -Wextra -Werror
```
Now:
```sh
warning: unused variable
```
becomes:
```sh
error: unused variable
```
Build fails.

Useful in CI/CD pipelines

---

`-pedantic` <br>
Enforces strict ISO C compliance.
```sh
gcc main.c -pedantic
```
Helps detect compiler-specific extensions.
