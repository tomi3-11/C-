# The Big Picture (Mental Model First)

Think of compilation as an assembly line in a factory.

You start with human-friendly text <br>
You end with machine-executable instructions.

> *Key idea:*
> The compiler is NOT one thing.
> It is a pipeline of distinct stages

**The Compilation Pipeline (Bird's Eye View)**
For C programs, the pipeline is:
```css
Source Code (.c)
    |
Preprocessor
    |
Compiler
    |
Assembler
    |
Object Files (.o)
    | 
Linker
    |
Executable (prog)

```
`gcc` hides these steps by default, but they always happens.

## Stage 1: Preprocessing
> "Text manipulation, not programming"

### What is preprocessor actually is
The preprocessor is not aware of C syntax.

It does **no type checking**, no logic, no understanding of functions.

It is basically:
- Find text
- Replace text
- Include text
- Remove text

Think **"copy-paste + search-replace"**.

### What happens here?
1. `#include`
```c

#include <stdio.h>
``` 
This literally means:
> "Take the content of `stdio.h` and paste them here."

No magic. No linking. No importing. <br>
After preprocessing:
```c
int printf(const char *, ...);

int main() {
    printf("Hello\n");
}

```
*Important mental model*
`#include` != import <br>
It's **text** insertion.

2. `#define` (Macros)
```c
#define MAX 10
```
Becomes:
```c
for (int i = 0; i < 10; i++)
```
Macros are blind subscription.
```c
#define SQR(x) x*x
SQR(1+2)
```
Becomes:
```c
1+2*1+2 // wrong!
```
> This explains why macros are dangerous.

3. Conditional compilation
```c
#ifdef DEBUG
    printf("Debug\n");
#endif
```
If `DEBUG` is defined -> code exits <br>
If not -> code is removed

No runtime cost. Code never exists.

---

### What comes out of preprocessing?
Still C code, just expanded and cleaned.

You can see it:
```bash
gcc -E main.c
```
Key truth
> Preprocessing only prepares text.
> It does not make programs correct.

## Stage 2: Compilation (The Real Brain Work)
Now the actual compiler starts.

This is where programming rules apply.

---

### What the compiler does conceptuallly
1. Lexing (Tokenization)
Break text into tokens:
```c

int a = 5;
```
-> `int` `identifier(a)` `=` `number(5)` `;`

2. Parsing
Builds a structure (syntax tree):
```c

int a = 5;
```
Becomes:
```yaml 

declaration
  |- type: int
  |- name: a
  |- value: 5
```
If grammer is wrong -> syntax error

---
