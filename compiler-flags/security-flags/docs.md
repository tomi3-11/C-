# Security Flags
These matter in real-world applications.

### Stack Protector
```c
-fstack-protector-strong
```
Protects against stack buffer overflows.

### Fortify Source
```c
-D_FORTIFY_SOURCE=2
```
Detects unsafe memory operations. <br>
Usually combined with:
```c
-02
```

### Position independent Executable
```c
-fPIE -pie
```
Allows ASLR protection.

### RELRO
Linker option:
```c
-Wl,-z,relro,-z,now
```
Hardens binaries.

---

Common hardened build:
```c
gcc main.c \
-02 \
-fstack-protector-strong \
-D_FORTIFY_SOURCE=2 \
-fPIE \
-pie
```
