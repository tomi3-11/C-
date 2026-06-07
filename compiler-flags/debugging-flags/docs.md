# Debugging Flags
### -g
Adds debug symbols.
```sh
gcc main.c -g
```
Required for:
- GDB
- LLDB
- Valgrind

Without it:
```sh
gdb app
```
gives limited information.

with it:
```sh
(gdb) bt
```
shows source file and line numbers.

### -ggdb
Extra debugginng information optimized for GDB.
```sh
gcc main.c -ggdb
```
