#include<stdio.h>
/**
 * main - program to print fibonacci sequence
 *
 * Return: 0 is always right
 */

int main(void)
{
	unsigned long int n = 50;
	unsigned long int i;
	unsigned long int a = 0;
	unsigned long int b = 1;
	unsigned long int c;

	for (i = 1; i <= n; i++)
	{
		printf("%lu, ", a);
		c = a + b;
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
