#include "holberton.h"

/**
 *print_diagonal- print a diagonal line on terminal
 *@n: integer
 */
void print_diagonal(int n)
{
	int y;
	int x;

	if (n > 0)
	{
		for (y = 0; y < n; y++)
		{
			_putchar('\\');
			if (y < n - 1)
			{
				_putchar('\n');
				for (x = 0; x <= 1; x++)
				{
					_putchar(' ');
				}
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
