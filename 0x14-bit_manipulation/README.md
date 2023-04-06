0. 0 : A function that converts a binary number to an unsigned int.
- Prototype: `unsigned int binary_to_uint(const char *b);`
- Where `b` is pointing to a string of `0` and `1` chars.
- Return: the converted number, or 0 if
	- there is one or more chars in the string `b` that is not `0` or `1`
	- `b` is `NULL`
1. 1 : A function that prints the binary representation of a number.
- Prototype: `void print_binary(unsigned long int n);`
2. 10 : A function that returns the value of a bit at a given index.
- Prototype: `int get_bit(unsigned long int n, unsigned int index);
3. 11 : A function that sets the value of a bit to 1 at a given index.
- Prototype: `int set_bit(unsigned long int *n, unsigned int index);`
4. 100 : A function that sets the value of a bit to 0 at a given index.
- Prototype: `int clear_bit(unsigned long int *n, unsigned int index);`
5. 101 : A function that returns the number of bits you would need to flip to get from one number to another.
- Prototype: `unsigned int flip_bits(unsigned long int n, unsigned long 
6. Endianness : A function that checks the endianness.
- Prototype: `int get_endianness(void);`
- Returns: `0` if big endian, `1` if little endian.
7. Crackme3 : Find the password for this program.
- Get the file this way: `curl -fsSL https://raw.githubusercontent.com/holbertonschool/0x13.c/master/crackme3 -o crackme3`
- Will revisit this challenge and explain how to solve it.

