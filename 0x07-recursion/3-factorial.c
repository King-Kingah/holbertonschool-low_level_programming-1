#include "holberton.h"

/**
 * factorial - returns factorial of a given number
 * @n: integer
 * Return: If n lower than 0, return -1 to indicate an error
*/
int factorial(int n)
{
	if (n <= 1)
		return 1;
	return n * factorial(n-1);
}
