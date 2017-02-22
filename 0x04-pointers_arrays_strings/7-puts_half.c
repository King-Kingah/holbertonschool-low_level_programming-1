#include "holberton.h"

/**
 * _puts_half - prints half a string
 * @char - character
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
	}
	for (i = i / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
