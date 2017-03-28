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
- The following data structure must be incorporated in this project:
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
- [Valgrind](http://valgrind.org/docs/) is used in Tasks  4, 5, 10
- [Linked List tutorials](http://www.geeksforgeeks.org/data-structures/linked-list/) on Geeks for Geeks
>Let's consider two different data structures for storing a list of things: an array and a linked list.
>
>An array is a pretty obvious way to store a list, with a big advantage:  it enables very fast access of each item.  However, it has two disadvantages.
>
>First, if we want to insert an item at the beginning or middle of an array, we have to slide a lot of items over one place to make room.  This takes time proportional to the length of the array.
>
>Second, an array has a fixed length that can't be changed.  If we want to add items to the list, but the array is full, we have to allocate a whole new array and move all the ints from the old array to the new one.

## Project Breakdown
| Task # | Type | Short description | File name and link |
| ---: | --- | --- | --- |
|0 | **Mandatory**  |Write a function that prints all the elements of a `list_t` list.<br><br>Prototype: `size_t print_list(const list_t *h);`<br>>Return: the number of nodes<br>Format: see example<br>You are allowed to use `printf`<br>   | File: [0-print_list.c](./0-print_list.c) |
|1 | **Mandatory** | Write a function that returns the number of elements in a linked `list_t` list.<br><br>Prototype: `size_t list_len(const list_t *h);`   | File: [1-list_len.c](./1-list_len.c) |
|2 | **Mandatory** | Write a function that adds a new node at the beginning of a list_t list.<br><br>Prototype: `list_t *add_node(list_t **head, const char *str);`<br>Return: the address of the new element, or NULL if it failed<br>`str` needs to be duplicated<br>You are allowed to use `strdup`   | File: [2-add_node.c](./2-add_node.c) |
|3 | **Mandatory** | Write a function that adds a new node at the end of a `list_t` list.<br><br>Prototype: `list_t *add_node_end(list_t **head, const char *str);`<br>Return: the address of the new element, or `NULL` if it failed<br>`str` needs to be duplicated<br>You are allowed to use `strdup`   | File: [3-add_node_end.c](./3-add_node_end.c) |
|4 | **Mandatory** | Write a function that free a `list_t` list.<br><br>Prototype: `void free_list(list_t *head);`    | File: [4-free_list.c](./4-free_list.c)|
|3 | *Advanced* | Write a function that prints `You're beat! and yet, you must allow,\nI bore my house upon my back!\n` before the `main` function is executed.    |File: [100-first.c](./100-first.c) |
|4 | *Advanced* | Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line. | File: [101-hello_holberton.asm](./101-hello_holberton.asm) |