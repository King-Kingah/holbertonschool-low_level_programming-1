#include "holberton.h"

/**
 * times_table - create a table of multiplication facts
 * @int: integer
 *
 * Return: print to stdout the 9 times table, starting with 0.
 */
void times_table(void)
{
       	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if ( x * y / 10 == 0 )
			{
				_putchar( x * y + '0' );
				_putchar(',');
				_putchar(' ');
				_putchar(' ');

			}
			else
			{
				_putchar( x * y / 10 + '0');
				_putchar( x * y % 10 + '0' );
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
