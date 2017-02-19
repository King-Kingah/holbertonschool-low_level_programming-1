#include<stdio.h>
/**
 * main - program to print fibonacci sequence
 *
 * Return: 0 is always right
 */

int main(void)
{
	long unsigned int n = 50;
	long unsigned int i;
	long unsigned int a = 0;
	long unsigned int b = 1;
	long unsigned int c;

	for (i = 1; i <= n; i++)
	{
		printf("%lu ", a);
		c = a + b;
		a = b;
		b = c;
	}
	return (0);
}
