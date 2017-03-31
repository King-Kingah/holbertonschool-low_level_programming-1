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
	unsigned long int mask = 1u << ((sizeof(unsigned int) * CHAR_BIT) - 1);
	int i;

	for (i = 0; mask > 0; i++)
	{
		if ((n & mask) == 0)
			_putchar('0');
		else
			_putchar('1');
		mask = mask >> 1;
	}

}
