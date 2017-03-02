#include "holberton.h"

/**
 * is_palindrome - checks if string is a palindrome
 * @s: character string
 * Return 1 if string is a palindrome, and 0 if not
 */
int is_palindrome(char *s)
{
	int i = 0;
	int leftIndex = 0;
	int rightIndex = i - 1;

	if (s == '\0' || leftIndex < 0 || rightIndex < 0)
	{
		return (0);
	}
	else if (leftIndex >= rightIndex)
		return (1);
	if (s[leftIndex] == s[rightIndex])
	{
		return is_palindrome(s);
	}
	return (5);
}
