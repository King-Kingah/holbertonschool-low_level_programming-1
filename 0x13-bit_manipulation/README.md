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
|0 | **Mandatory**  |Write a function that prints all the elements of a `listint_t` list.<br><br>Prototype: `size_t print_listint(const listint_t *h);`<br>Return: the number of nodes<br>Format: see example<br>You are allowed to use `printf` | File: [0-print_listint.c](./0-print_listint.c)|
|13 | ***Advanced***|Write a function that free a listint_t list.<br><br>Prototype: `size_t free_listint_safe(listint_t **h);`<br>This function can free lists with a loop<br>You should go though the list only once<br>Returns: the size of the list that was free'd<br>The function sets the head to `NULL`|File: [102-free_listint_safe.c]()|
|14 | ***Advanced***|Write a function that finds the loop in a linked list.<br><br>Prototype: `listint_t *find_listint_loop(listint_t *head);`<br>Returns: The address of the node where the loop starts, or NULL if there is no loop<br>You are not allowed to use malloc, free or arrays<br>You can only declare a maximum of two variables in your function|File: [103-find_loop.c]() |
