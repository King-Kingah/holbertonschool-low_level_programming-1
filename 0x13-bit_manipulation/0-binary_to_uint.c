#include "holberton.h"
/**
 * _strtou - convert string to unsigned int
 * @c: char string
 * Return: unsigned integer
 */
unsigned int _strtou(char c)
{
	return ((unsigned int) c - '0');
}

/**
 *binary_to_uint - a function that converts a binary number to an unsigned int
 *@b: const pointer to a string of 0 and 1 chars
 *Return: the converted number, or 0 if any chars not 0 or 1 or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int convert = 0;
	int i = 0;
	int index = 0;

	if (b == NULL)
		return (0);

	for (; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (i == 1)
		{
			index = _strtou(b[i]);
			convert = 0 * 2 + index;
		}
		index = _strtou(b[i]);
		convert = convert * 2 + index;
	}

	return (convert);
}
