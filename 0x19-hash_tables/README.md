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

0-hash_table_create.c
1-djb2.c
2-key_index.c
3-hash_table_set.c
4-hash_table_get.c
5-hash_table_print.c
6-hash_table_delete.c

	  <p>Watch <a href="https://www.youtube.com/watch?v=MfhjkfocRR0">What is a HashTable Data Structure - Introduction to Hash Tables , Part 0</a> and read <a href="https://en.wikipedia.org/wiki/Hash_function">Hash function</a>, <a href="https://en.wikipedia.org/wiki/Hash_table">Hash table</a> and <a href="http://www.cse.yorku.ca/%7Eoz/hash.html">Hash Functions</a>.</p>
	  <p>At the end of this project you are expected to be able to explain to anyone, without the help of Google:</p>
	    <li>What is a hash function</li>
	    <li>What makes a good hash function</li>
	    <li>What is a hash table, how do they work and how to use them</li>
	    <li>What is a collision and what are the main ways of dealing with collisions in the context of a hash table</li>
	    <li>What are the advantages and drawbacks of using hash tables</li>
	    <li>What are the most common use cases of hash tables</li>
	    <li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
	    <li>All your files will be compiled on Ubuntu 14.04 LTS</li>
	    <li>Your programs and functions will be compiled with <code>gcc 4.8.4</code> (<code>C90</code>) using the flags <code>-Wall</code> <code>-Werror</code> <code>-Wextra</code> <code>and -pedantic</code></li>
	    <li>All your files should end with a new line</li>
	    <li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
	    <li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl">betty-doc.pl</a></li>
	    <li>You are not allowed to use global variables</li>
	    <li>No more than 5 functions per file</li>
	    <li>You are allowed to use the C standard library</li>
	    <li>The prototypes of all your functions should be included in your header file called <code>hash_tables.h</code></li>
	    <li>Don&#39;t forget to push your header file</li>
	    <li>All your header files should be include guarded</li>
	    <li>Please use those data structures for this project:</li>
	    <li>We strongly encourage you to work all together on a set of tests</li>
	  <p>Python dictionaries are implemented using hash tables. When you will be done with this project, you will be able to better understand the power and simplicity of Python dictionaries. So much is actually happening when you type <code>d = {&#39;a&#39;: 1, &#39;b&#39;: 2}</code>, but everything looks so simple for the user. Python doesn&#39;t use the exact same implementation than the one you will work on today though. If you are curious on how it works under the hood, here is a good blog post about <a href="http://www.laurentluce.com/posts/python-dictionary-implementation/">how dictionaries are implemented in Python 2.7</a> (not mandatory).</p>
	  <p>Note that all dictionaries are not implemented using hash tables and there is a difference between a dictionary and a hash table. <a href="http://stackoverflow.com/questions/2061222/what-is-the-true-difference-between-a-dictionary-and-a-hash-table">Read more here</a> (not mandatory).</p>
	      <p>Write a function that creates a hash table.</p>
		<li>Prototype: <code>hash_table_t *hash_table_create(unsigned long int size);</code>
		    <li>where <code>size</code> is the size of the array</li>
		<li>Returns a pointer to the newly created hash table</li>
		<li>If something went wrong, your function should return <code>NULL</code></li>
		<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
		<li>Directory: <code>0x19-hash_tables</code></li>
		<li>File: <code>0-hash_table_create.c</code></li>
	      <p>Write a hash function implementing the djb2 algorithm.</p>
		<li>Prototype: <code>unsigned long int hash_djb2(const unsigned char *str);</code></li>
		<li>You are allowed to copy and paste the function from <a href="http://www.cse.yorku.ca/%7Eoz/hash.html">this page</a></li>
		<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
		<li>Directory: <code>0x19-hash_tables</code></li>
		<li>File: <code>1-djb2.c</code></li>
	      <p>Write a function that gives you the index of a key.</p>
		<li>Prototype: <code>unsigned long int key_index(const unsigned char *key, unsigned long int size);</code>
		    <li>where <code>key</code> is the key</li>
		    <li>and <code>size</code> is the size of the array of the hash table</li>
		<li>This function should use the <code>hash_djb2</code> function that you wrote earlier</li>
		<li>Returns the index at which the key/value pair should be stored in the array of the hash table</li>
		<li>You will have to use this hash function for all the next tasks</li>
		<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
		<li>Directory: <code>0x19-hash_tables</code></li>
		<li>File: <code>2-key_index.c</code></li>
	      <p>Write a function that adds an element to the hash table.</p>
		<li>Prototype: <code>int hash_table_set(hash_table_t *ht, const char *key, const char *value);</code>
		    <li>Where <code>ht</code> is the hash table you want to add or update the key/value to</li>
		    <li><code>key</code> is the key. <code>key</code> can not be an empty string</li>
		    <li>and <code>value</code> is the value associated with the key. <code>value</code> can be an empty string</li>
		<li>Returns: <code>1</code> if it succeeded, <code>0</code> otherwise</li>
		<li>In case of collision, add the new node at the beginning of the list</li>
	      <p><em>Tip from <a href="https://twitter.com/JennieZChu">Jennie</a></em>: if you want to test for collisions, here are some strings that collide using the djb2 algorithm:</p>
		<li>hetairas collides with mentioner</li>
		<li>heliotropes collides with neurospora</li>
		<li>depravement collides with serafins</li>
		<li>stylist collides with subgenera</li>
		<li>joyful collides with synaphea</li>
		<li>redescribed collides with urites</li>
		<li>dram collides with vivency</li>
		<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
		<li>Directory: <code>0x19-hash_tables</code></li>
		<li>File: <code>3-hash_table_set.c</code></li>
	      <p>Write a function that retrieves a value associated with a key.</p>
		<li>Prototype: <code>char *hash_table_get(const hash_table_t *ht, const char *key);</code>
		    <li>where <code>ht</code> is the hash table you want to look into</li>
		    <li>and <code>key</code> is the key you are looking for</li>
		<li>Returns the value associated with the element, or <code>NULL</code> if <code>key</code> couldn&#39;t be found</li>
		<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
		<li>Directory: <code>0x19-hash_tables</code></li>
		<li>File: <code>4-hash_table_get.c</code></li>
	      <p>Write a function that prints a hash table.</p>
		<li>Prototype: <code>void hash_table_print(const hash_table_t *ht);</code>
		    <li>where <code>ht</code> is the hash table</li>
		<li>You should print the key/value in the order that they appear in the array of hash table
		    <li>Order: array, list</li>
		<li>Format: see example</li>
		<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
		<li>Directory: <code>0x19-hash_tables</code></li>
		<li>File: <code>5-hash_table_print.c</code></li>
	      <p>Write a function that deletes a hash table.</p>
		<li>Prototype: <code>void hash_table_delete(hash_table_t *ht);</code>
		    <li>where <code>ht</code> is the hash table</li>
		<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
		<li>Directory: <code>0x19-hash_tables</code></li>
		<li>File: <code>6-hash_table_delete.c</code></li>
