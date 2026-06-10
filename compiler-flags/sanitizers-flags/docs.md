# Sanitizers
Sanitizers find bugs automatically.

### Address Sanitizer
```c
-fsanitize=address
```
Detects:
- Buffer overflows
- Use-after-free
- Invalid memory access
Example:
```c
int arr[5];
arr[10] = 100;
```
Running program:
```sh
AddressSanitizer: stack-buffer-overflow
```

### Undefined Behavior Sanitizer
```c
-fsanitize=undefined
```
Detects:
- Integer overflow
- Invalid shifts
- Undefined behavior

### Leak Sanitizer
```c
-fsanitize=leak
```
Detects memory leaks.

---

Powerful debug build.
```sh
gcc main.c \
-g \
-Wall \
-Wextra \
-fsanitize=address \
-fsanitize=undefined 
```
Many professionals use this daily.
