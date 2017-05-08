<img src="https://www.holbertonschool.com/assets/holberton-logo-1cc451260ca3cd297def53f2250a9794810667c7ca7b5fa5879a569a457bf16f.png" alt="Holberton logo">

# 0x16. C - Doubly linked lists

### Author: Elaine Yeung

## Synopsis
This project introduces the concept of doubly linked lists in C Programming.

### What students should learn from this project

At the end of this project we are expected to be able to explain to anyone, without the help of Google:
- What is a doubly linked list
- How to use doubly linked lists
- Start to look for the right source of information without too much help

### Resources
- Watch <a href="https://www.youtube.com/watch?v=k0pjD12bzP0">What is a Doubly Linked List</a>.

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
- The only C standard library functions allowed are `malloc`, `free`, `printf` and `exit`. 
- The prototypes of all your functions should be included in your header file called lists.h
- Don't forget to push your header file
- All your header files should be include guarded
- Please use this data structure for this project:

```C
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

## Project Breakdown
Task # | Type | Short description | File name and link |
---: | --- | --- | --- |
0 | **Mandatory** | Project | File: [0-print_dlistint.c](./0-print_dlistint.c)
1 | **Mandatory** | Project | File: [1-dlistint_len.c](./1-dlistint_len.c)
2 | **Mandatory** | Project | File: [2-add_dnodeint.c](./2-add_dnodeint.c)
3 | **Mandatory** | Project | File: [3-add_dnodeint_end.c](./3-add_dnodeint_end.c)
4 | **Mandatory** | Project | File: [4-free_dlistint.c](./4-free_dlistint.c)
5 | **Mandatory** | Project | File: [5-get_dnodeint.c](./5-get_dnodeint.c)
6 | **Mandatory** | Project | File: [6-sum_dlistint.c](./6-sum_dlistint.c)
7 | **Mandatory** | Project | File: [7-insert_dnodeint.c](./7-insert_dnodeint.c)
8 | **Mandatory** | Project | File: [8-delete_dnodeint.c](./8-delete_dnodeint.c)
? | ***Advanced***| Project | File: [100-get_endianness.c](./100-get_endianness.c)|
? | ***Advanced***| Project | File: [101-password](./101-password)|
