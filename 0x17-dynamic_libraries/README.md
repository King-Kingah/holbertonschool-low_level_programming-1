<img src="https://www.holbertonschool.com/assets/holberton-logo-1cc451260ca3cd297def53f2250a9794810667c7ca7b5fa5879a569a457bf16f.png" alt="Holberton logo">

# 0x17. C - Dynamic libraries

### Author: Elaine Yeung

## Synopsis
This project introduces the concept of doubly linked lists in C Programming.

### What students should learn from this project

At the end of this project we are expected to be able to explain to anyone, without the help of Google:
<li>What is a dymanic library, how does it work, how to create one, and how to use it</li>
<li>What is the environment variable <code>$LD_LIBRARY_PATH</code> and how to use it</li>
<li>What are the differences between static and shared libraries</li>
<li>Basic usage <code>nm</code>, <code>ldd</code>, <code>ldconfig</code></li>

### Resources
- Read or watch <a href="https://www.youtube.com/watch?v=eW5he5uFBNM">What is difference between Dynamic and Static library (Static and Dynamic linking)</a>, <a href="https://www.google.com/#q=linux+create+dynamic+library">create dymanic libraries on Linux</a>.

### Project Requirements
#### C 
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with `gcc 4.8.4` (`C90`) using the flags `-Wall -Werror -Wextra and -pedantic`
[![image](https://cloud.githubusercontent.com/assets/23224088/24430835/7d83286c-13cd-11e7-9083-aadb330906b8.png)](https://twitter.com/egsy/status/833533513936703489)
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [`betty-style.pl`](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [`betty-doc.pl`](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc... is forbidden
- You are allowed to use <a href="https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c">_putchar</a>
- You don&#39;t have to push <code>_putchar.c</code>, we will use our file. If you do it won&#39;t be taken into account
- In the following examples, the <code>main.c</code> files are showed as examples. You can use them to test your functions, but you don&#39;t have to push them to your repo (if you do we won&#39;t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one showed in the examples
- The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>holberton.h</code>
- Don&#39;t forget to push your header file

#### Bash
- Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code>
- All your scripts will be tested on Ubuntu 14.04 LTS
- All your files should end with a new line (<a href="http://unix.stackexchange.com/questions/18743/whats-the-point-in-adding-a-new-line-to-the-end-of-a-file/18789">why?</a>)
- The first line of all your files should be exactly <code>#!/bin/bash</code>
- A <code>README.md</code> file, at the root of the folder of the project, describing what each script is doing
- All your files must be executable

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


libholberton.so, holberton.h
1-create_dynamic_lib.sh

  <p>Create the dynamic library libholberton.so containing all the functions listed below:
  <p>If you haven&#39;t coded all of the above functions create empty ones, with the right prototype.<br>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>0x17-dynamic_libraries</code></li>
<li>File: <code>libholberton.so, holberton.h</code></li>
  <p>Create a script that creates a dynamic library called <code>liball.so</code> from all the <code>.c</code> files that are in the current directory.
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>0x17-dynamic_libraries</code></li>
<li>File: <code>1-create_dynamic_lib.sh</code></li>
  <p>Write a blog post describing the differences between static and dynamic libraries. It should cover:
<li>Why using libraries in general</li>
<li>How do they work</li>
<li>How to create them (Linux only)</li>
<li>How to use them (Linux only)</li>
<li>What are the differences between static and dynamic libraries</li>
<li>What are the advantages and drawbacks of each of them</li>
  <p>Your posts should have examples and at least one picture, at the top.
  <p>When done, please <a href="https://goo.gl/forms/yVE69U8DIRyDAlVj1">fill this form</a>.
