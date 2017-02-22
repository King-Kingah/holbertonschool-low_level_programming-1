#include "holberton.h"

/**
 * _puts - prints a string
 * @char - character
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i=i+2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
