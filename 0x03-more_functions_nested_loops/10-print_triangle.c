#include "holberton.h"

/**
 *print_triangle - print a triangle
 *@size: integer
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = size - 1; i >= 0; i--)
	{
		for (j = 0; j < size; j++)
		{
			if (j < i)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
			_putchar('\n');


	}
}
