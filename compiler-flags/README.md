# The Flags Most Professionals Use

### Development Build
```bash
gcc *.c \
-std=c17 \
-Wall \
-Wextra \
-Werror \
-g \
-O0
```
Purpose:
- Maximum warnings
- Easy debugging

---

### Debug Build with sanitizers
```bash
gcc *.c \
-std=c17 \
-Wall \
-Wextra \
-g \
-fsanitize=address \
-fsanitize=undefined
```
Purpose:
- Catch bugs early

---

### Production Build
```bash
gcc *.c \
-std=c17 \
-O2 \
-fstack-protector-strong \
-D_FORTIFY_SOURCE=2 \
-fPIE \
-pie
```
Purpose:
- Fast
- Secure

### Only master these to use in most c projects using (80/20) Flags
```bash
-std=c17
-Wall
-Wextra
-Werror
-g
-O0
-O2
-I
-L
-l
-o
-fsanitize=address
-fsanitize=undefined
-MMD
-fstack-protector-strong
```
These are the flags you'll see repeatedly in Makefiles for projects such as Linux Kernel utilities, databases, networking tools, embedded systems, and backend infrastructure
