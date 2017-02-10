#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
	char c;
	char C;
	c = 'a';
	c = 'Z';

	while (c <= 'z')
{
		putchar (c);
		c = c + 1;
	}
	while ( C <= 'Z')
	{
		putchar (C);
		C = C + 1;
	}
	putchar ('\n');
	return (0);
}
