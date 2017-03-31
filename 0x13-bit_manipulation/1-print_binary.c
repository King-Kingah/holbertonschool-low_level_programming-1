#include "holberton.h"
#include <limits.h>
/**
 *print_binary - a function that prints the binary representation of a number
 *@n: unsigned long int
 *You are not allowed to use arrays
 *You are not allowed to use malloc
 *You are not allowed to use the % or / operators
 */
void print_binary(unsigned long int n)
{
	bool index;
	int i;

//	mask = ((sizeof(n) * 8) - 1);
	if (n == 0)
		_putchar('0');
	for (i = ((sizeof(n) * 8) - 1); ; n; i--)
	{
		mask = mask >> 1;
		if ((n & mask) == 0)
			_putchar('0');
		else
			_putchar('1');
	}
}
