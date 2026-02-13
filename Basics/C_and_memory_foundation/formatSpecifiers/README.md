# Format Specifiers in C
In programming, a format specifier tells the compiler the type of data to expect when reading input (`scanf`) or printing output (`printf`).
They always start with a `%` symbol, followed by a character that represents the data type.

## Common Format Specifiers in C

| Specifier | Data Type | Example Value |
|-----------|-----------|---------------|
| `%d` or `%i` | int (signed) | 42 |
| `%u`      | unsigned int | 300 |
| `%ld`     | long int  | 123456789 |
| `%lu`     | unsigned long int | 4000000000 |
| `%f`      | float / double (in printf) | 3.14 |
| `%lf`     | double (in scanf) | 3.14 |
| `%c`      | char | 'A' |
| `%s`      | String (`char[]`) | "Hello" |
| `%p`      | Pointer address | 0x7ffee |
| `%x` / `%X` | Hexadecimal (lower/upper) | 0x2A |
| `%o`      | Octal | 052 |
| `%%`      | Literal % | % |


