# Dependency Generation
Useful for Makefiles. <br>
`-MMD` <br>
Generate dependency file.
```sh
gcc -MMD
```
Produces:
```sh
main.d
```
Used for automatic rebuilds.
