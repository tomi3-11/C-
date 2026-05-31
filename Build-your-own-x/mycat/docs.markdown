# Custom Cat in c
This is a simple `cat` in cat [Concatination] implemented from scratch in `c`.

## how it works
The custom cat command reads data from files (or standard input) and writes it to standard output.

Example:
```bash
./cat notes.txt
```
If `notes.txt` contains:
```txt
Hello
World
```
Output:
```txt
Hello
World
```
Conceptually:
```c
File
  |
Read bytes
  |
Write bytes
  |
Terminal
```

### Simplest implementation
Algorithm

1. Get filename from command line.
2. Open file
3. Read one character
4. Print character
5. Repeat until end of file
6. close file

---
Documented by: [Tom](https://github.com/tomi3-11)
