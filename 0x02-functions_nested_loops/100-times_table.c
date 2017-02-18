#include "holberton.h"

/**
 *
 */
void print_times_table(int n)
{
	int i;
	int j;

	for (i = 0; i <= n; i++)
	{
		j = 0;
		_putchar('0');
		if (n < 0 || n > 15)
		{
			_putchar('\n');
		}
		for (j = 1; j <= n; j++)
		{
			if ((i * j) <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(i * j + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(i * j / 10 + '0');
				_putchar(i * j % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
