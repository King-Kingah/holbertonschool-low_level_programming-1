/**
 * _putchar
 */
int _putchar(char c);
/**
 * Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.
 */
char *_strcat(char *dest, char *src);
/**
 * This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
 */
char *_strncat(char *dest, char *src, int n);
/**
 * similar to _strcat function except it will use at most n bytes from src
 */
char *_strncpy(char *dest, char *src, int n);
/**
 * copies a string exactly like strncpy
 */
int _strcmp(char *s1, char *s2);
/**
 * function that compares two strings
 */
void reverse_array(int *a, int n);
/**
 * Write a function that reverses the content of an array of integers.
 */
char *string_toupper(char *);
/**
 * Write a function that changes all lowercase letters of a string to uppercase.
 */
char *cap_string(char *);
/**
 * Write a function that capitalizes all words of a string.
 */
char *leet(char *);
/**
 * Write a function that encodes a string into 1337.
 */
char *rot13(char *);
/**
 * Write a function that encodes a string using rot13.
 */
