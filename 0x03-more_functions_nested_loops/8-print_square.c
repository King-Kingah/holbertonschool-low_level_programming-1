#include "holberton.h"

/**
 *print_square - print squares of a specified size
 *@size: integer
 */
void print_square(int size)
{
	int x;
	int y;

	if (size > 0)
	{
		while (x < size)
		{
			x = 0;
			while (y < size)
			{
				_putchar('#');
				y++;
			}
			_putchar("\n");
			x++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
