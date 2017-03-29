<img src="https://www.holbertonschool.com/assets/holberton-logo-1cc451260ca3cd297def53f2250a9794810667c7ca7b5fa5879a569a457bf16f.png" alt="Holberton logo">

# 0x12. C - More singly linked lists

### Author: Elaine Yeung

## Synopsis
This project explores the concept of singly linked lists in C Programming.

![image](https://cloud.githubusercontent.com/assets/23224088/24430152/1a2fde02-13ca-11e7-8a67-f2420de7c4aa.png)
### What students should learn from this project

At the end of this project you are expected to be able to explain to anyone, without the help of Google:
- How to use linked lists
- Start to look for the right source of information without too much help

### Resources
- [Valgrind](http://valgrind.org/docs/) is used in Tasks  4, 5, 10
- [Linked List tutorials](http://www.geeksforgeeks.org/data-structures/linked-list/) on Geeks for Geeks
- Excerpt from "Linked List" section of [Stephen Kochan's book "Programming in C"](https://www.google.com/webhp?sourceid=chrome-instant&ion=1&espv=2&ie=UTF-8#q=kochan+programming+in+c&*) pages 244 - 253
>This is one of the main motivations for the use of a linked list approach for storing information: Entries of the list do not have to be stored sequentially in memory, as is the case with elements in an array.

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
- In the following examples, the `main.c` files are showed as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one showed in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called [`lists.h`](./lists.h)
- Don't forget to push your header file
- All your header files should be include guarded
- Please use this data structure for this project:
```C
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```

## Project Breakdown
| Task # | Type | Short description | File name and link |
| ---: | --- | --- | --- |
|0 | **Mandatory**  |Write a function that prints all the elements of a `listint_t` list.<br><br>Prototype: `size_t print_listint(const listint_t *h);`<br>Return: the number of nodes<br>Format: see example<br>You are allowed to use `printf` | File: [0-print_listint.c](./0-print_listint.c)|
|1 | **Mandatory**|Write a function that returns the number of elements in a linked `listint_t` list.<br><br>Prototype: `size_t listint_len(const listint_t *h);`|File: [1-listint_len.c](./1-listint_len.c)|
2. Add node mandatory

Write a function that adds a new node at the beginning of a listint_t list.

Prototype: listint_t *add_nodeint(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed
File: [2-add_nodeint.c](./2-add_nodeint.c)

|2 | **Mandatory**| | |


Write a function that adds a new node at the end of a listint_t list.

Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed
File: [3-add_nodeint_end.c](./3-add_nodeint_end.c)

|3 | **Mandatory**| | |
Write a function that free a listint_t list.

Prototype: void free_listint(listint_t *head);
File: [4-free_listint.c](./4-free_listint.c)

|4 | **Mandatory**| | |
Write a function that free a listint_t list.

Prototype: void free_listint2(listint_t **head);
The function sets the head to NULL
File: [5-free_listint2.c](./5-free_listint2.c)

Write a function that deletes the head node of a listint_t linked list, and returns the head node's data (n).

Prototype: int pop_listint(listint_t **head);
if the linked list is empty return 0
File: 6-pop_listint.c
(./6-pop_listint.c)
Write a function that returns the nth node of a listint_t linked list.

Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
where index is the index of the node, starting at 0
if the node does not exist, return NULL
File: 7-get_nodeint.c
(./7-get_nodeint.c)
Write a function that returns the sum of all the data (n) of a listint_t linked list.

Prototype: int sum_listint(listint_t *head);
if the list is empty, return 0
File: 8-sum_listint.c
(./8-sum_listint.c)
Write a function that inserts a new node at a given position.

Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
where idx is the index of the list where the new node should be added. Index starts at 0
Returns: the address of the new node, or NULL if it failed
if it is not possible to add the new node at index idx, do not add the new node and return NULL
File: 9-insert_nodeint.c
(./9-insert_nodeint.c)
Write a function that deletes the node at index index of a listint_t linked list.

Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);
where index is the index of the node that should be deleted. Index starts at 0
Returns: 1 if it succeeded, -1 if it failed
File: 10-delete_nodeint.c
(./10-delete_nodeint.c)

|5 | **Mandatory**| | |
|6 | **Mandatory**| | |
|7 | **Mandatory**| | |
|8 | **Mandatory**| | |
|9 | **Mandatory**| | |
|10 | **Mandatory**| | |
|11 | ***Advanced***| | |
|12 | ***Advanced***| | |
|13 | ***Advanced***| | |
|14 | ***Advanced***| | |