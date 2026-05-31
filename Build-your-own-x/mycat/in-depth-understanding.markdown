# Understanding every line of the custom cat
Lets kick-off without fluff

## 1. Include stdio.h
```c
#include <stdio.h>
```
Provides:
```c
FILE
fopen()
fclose()
fgetc()
putchar()
EOF
```
Without this header the compiler doesn't know these functions exist.

## 2. main()
```c
int main(int argc, char *argv[])
```
#### argc
Argument Count <br>
Example:
```bash
./cat file.txt
```
Produces:
```bash
argc = 2
```
Because there are two arguments:
```bash
argv[0] = "./cat"
argv[1] = "file.txt"
```

#### argv
Argument Vector, Array of strings. <br>
Memory looks roughly like:
```bash
argv
 |
 |--- "./cat"
 |
 |--- "file.txt"
```
We want:
```c
argv[1]
```
because that's the filename.

## 3. FILE *
```c
FILE *file;
```
`FILE` is the structure provided by the C standard library. Let's think of it as:
```c
FILE
  |--- current position
  |--- file descriptor
  |--- buffer
  |--- status flags
```
It stores information about an open file.<br>
The `*` means pointer.
```
FILE *file
```
means:
```
file points to a FILE structure
```

#### Opening the file
```c
file = fopen(argv[1], "r");
```

#### fopen()

