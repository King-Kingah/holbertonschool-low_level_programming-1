#0x05. C - more pointers, arrays and strings
## Description
At the end of this project we are expected to be able to explain to anyone, without the help of Google:
- What are pointers and how to use them
- What are arrays and how to use them
- What are the differences between pointers and arrays
- How to use strings and how to manipulate them
- Scope of variables

### Tasks
####0. strcat

Write a function that concatenates two strings.

- Prototype: `char *_strcat(char *dest, char *src)`
- This function appends the `src` string to the `dest` string, overwriting the terminating null byte `(\0)` at the end of `dest`, and then adds a terminating null byte
- Returns a pointer to the resulting string `dest`

File: 0-strcat.c

####1. strncat

Write a function that concatenates two strings.

- Prototype: `char *_strncat(char *dest, char *src, int n)`
- The _strncat function is similar to the _strcat function, except that
 - it will use at most `n` bytes from `src`; and
 - `src` does not need to be null-terminated if it contains `n` or more bytes
- Return a pointer to the resulting string `dest`

File: 1-strncat.c

####2. strncpy
Write a function that copies a string.

- Prototype: `char *_strncpy(char *dest, char *src, int n)`
- Your function should work exactly like strncpy

File: 2-strncpy.c

####3. strcmp
Write a function that compares two strings.

- Prototype: `int _strcmp(char *s1, char *s2)`
- Your function should work exactly like `strcmp`

File: 3-strcmp.c

####4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy mandatory

Write a function that reverses the content of an array of integers.

- Prototype: `void reverse_array(int *a, int n);`
- Where `n` is the number of elements of the array

File: 4-rev_array.c

####5. Write a function that changes all lowercase letters of a string to uppercase.

- Prototype: `char *string_toupper(char *);`

File: 5-string_toupper.c

####6. Write a function that capitalizes all words of a string.

- Prototype: `char *cap_string(char *)`

File: 6-cap_string.c

####7. Mozart composed his music not for the elite, but for everybody
Write a function that encodes a string into 1337.

- Prototype: `char *leet(char *)`

File: 7-leet.c

####8. rot13

Write a function that encodes a string using rot13.

- Prototype: `char *rot13(char *)`

File: 8-rot13.c

___
###Advanced Tasks
####9. ?

###10. ?

####11. ?
