<img src="https://www.holbertonschool.com/assets/holberton-logo-1cc451260ca3cd297def53f2250a9794810667c7ca7b5fa5879a569a457bf16f.png" alt="Holberton logo">

# 0x13. C - Bit manipulation

### Author: Elaine Yeung

## Synopsis
This project explores the concept of bitwise operation in C Programming.

### What students should learn from this project

At the end of this project you are expected to be able to explain to anyone, without the help of Google:
- Look for the right source of information without too much help
- How to manipulation bits and use bitwise operators

### Resources
- [Exercises](https://github.com/yeungegs/kochan-c-exercises/tree/master/chapter-11) from Chapter 11 - "Operations on Bits" from [Stephen Kochan's book "Programming in C"](https://www.google.com/webhp?sourceid=chrome-instant&ion=1&espv=2&ie=UTF-8#q=kochan+programming+in+c&*) pages 278 - 285 
#### Bitwise AND Operator Truth Table
|b1|b2 | b1 & b2 |
| :---: | :---: | :---: |
|0|0|0|
|0|1|0|
|1|0|0|
|1|1|1|

#### Bitwise Inclusive-OR Operator Truth Table
|b1|b2 | b1 \| b2 |
| :---: | :---: | :---: |
|0|0|0|
|0|1|1|
|1|0|1|
|1|1|1|

#### Bitwise Exclusive-OR Operator Truth Table
|b1|b2 | b1 ^ b2 |
| :---: | :---: | :---: |
|0|0|0|
|0|1|1|
|1|0|1|
|1|1|0|

#### Bitwise Ones Complement Truth Table
|b1|~b1|
| :---: | :---: |
|0|1|
|1|0|


### Project Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with `gcc 4.8.4` (`C90`) using the flags `-Wall -Werror -Wextra and -pedantic`

[![image](https://cloud.githubusercontent.com/assets/23224088/24430835/7d83286c-13cd-11e7-9083-aadb330906b8.png)](https://twitter.com/egsy/status/833533513936703489)
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [`betty-style.pl`](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [`betty-doc.pl`](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc... is forbidden
- You are allowed to use [`_putchar`](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
- You don't have to push `_putchar.c`, we will use our file. If you do it won't be taken into account
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called [`holberton.h`](./holberton.h)
- Don't forget to push your header file
- All your header files should be include guarded

## Project Breakdown
| Task # | Type | Short description | File name and link |
| ---: | --- | --- | --- |
|0 | **Mandatory**  | Write a function that converts a binary number to an unsigned int.<br><br>Prototype: `unsigned int binary_to_uint(const char *b);`<br>where `b` is pointing to a string of `0` and `1` chars<br>Return: the converted number, or 0 if<br>there is one or more chars in the string b that is not 0 or 1<br>b is NULL| File: [0-binary_to_uint.c](./0-binary_to_uint.c)|
|1 | **Mandatory** |Write a function that prints the binary representation of a number.<br><br>Prototype: `void print_binary(unsigned long int n);`<br>Format: see example<br>You are not allowed to use arrays<br>You are not allowed to use malloc<br>You are not allowed to use the % or / operators | File: [1-print_binary.c](./1-print_binary.c) |
|2 | **Mandatory** |Write a function that returns the value of a bit at a given index.<br><br>Prototype: `int get_bit(unsigned long int n, unsigned int index);`<br>where index is the index, starting from 0 of the bit you want to get<br>Returns: the value of the bit at index index or -1 if an error occured | File: [2-get_bit.c](./2-get_bit.c) |
|3 | **Mandatory** |Write a function that sets the value of a bit to 1 at a given index.<br><br>Prototype: `int set_bit(unsigned long int *n, unsigned int index);`<br>where index is the index, starting from 0 of the bit you want to set<br>Returns: 1 if it worked, or -1 if an error occurred | File: [3-set_bit.c](./3-set_bit.c) |
|4 | **Mandatory** |Write a function that sets the value of a bit to 0 at a given index.<br><br>Prototype: `int clear_bit(unsigned long int *n, unsigned int index);`<br>where index is the index, starting from 0 of the bit you want to set<br>Returns: 1 if it worked, or -1 if an error occurred | File: [4-clear_bit.c](./4-clear_bit.c) |
|5 | **Mandatory** |Write a function that returns the number of bits you would need to flip to get from one number to another.<br><br>Prototype: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`<br>You are not allowed to use the % or / operators | File: [5-flip_bits.c](./5-flip_bits.c) |
|6 | ***Advanced***| |File: [100-get_endianness.c](./100-get_endianness.c)|
|7 | ***Advanced***| |File: [101-password](./101-password)|
