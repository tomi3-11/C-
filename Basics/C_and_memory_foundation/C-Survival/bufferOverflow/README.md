# Buffer Overflow in C
Buffer is simply a temporary chunk of memory that is alocated when creating data.

## Part 1: Drawing memory layouts
1. The Stack (menta Model)

When a C function runs, memory on the stack typically looks like this:

```pgsql

HIGH MEMORY
+------------------+
| Return Address   |  ← where execution goes back
+------------------+
| Saved Frame Ptr  |
+------------------+
| Local variables  |
| (buffers, ints)  |
+------------------+
LOW MEMORY
```
The stack grows downwards towards lower addresses

2. A simple buffer on the stack.
```c

void func() {
        char buffer[8];
        int x = 42;
}
```
Memory Layout (typically, simplified)

```adruino

HIGH MEMORY
+------------------+
| Return Address   |
+------------------+
| Saved RBP        |
+------------------+
| x = 42           |  ← int (4 bytes)
+------------------+
| buffer[7]        |
| buffer[6]        |
| buffer[5]        |
| buffer[4]        |
| buffer[3]        |
| buffer[2]        |
| buffer[1]        |
| buffer[0]        |  ← char[8]
+------------------+
LOW MEMORY

```
Important
- `buffer` is just bytes
- No size checking
- C does not know how long your data really is

3. Writing safely into the buffer
```c
strncpy(buffer, "ABC", 8);
```
Memory becomes:
```ruby
buffer: [A][B][C][\0][?][?][?][?]
```
Everything is fine now.

4. Buffer overflow (the danger)
```c
strcpy(buffer, "AAAAAAAAAAAA");
```
12 bytes into 8-bytes buffer.

##### What actually happens
```less
LOW MEMORY
+------------------+
| A | A | A | A |  ← buffer[0–3]
+------------------+
| A | A | A | A |  ← buffer[4–7]
+------------------+
| A | A | A | A |  ← OVERWRITES x
+------------------+
| Return Address   |  ← next target 😈
+------------------+

```
Now:
- `x` is corrupted
- Return address may be corrupted
- Program may crush or be hijacked
This is not a **bug**, This is *expected behavior* in C

5. Why this matters
C assumes:
> "You know what you're doing."

If you don't:
- undefined behavior
- Silent corruption
- Security holes

This is why:
- exploits exist
- kernels are written carefully
- bounds checks matter
