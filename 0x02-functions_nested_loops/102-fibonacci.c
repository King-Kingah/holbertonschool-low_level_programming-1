#include<stdio.h>

/**
 * main - program to print fibonacci sequence (first 50)
 * Return: 0
 */
int main(void)
{
	unsigned int i;
	unsigned long int a = 1;
	unsigned long int b = 1;
	unsigned long int c;

	printf("%lu, ", a);

	for (i = 0; i <= 48; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if(i < 48)
			printf("%lu, ", b);
		else
			printf("%lu\n", b);
	}
	return (0);
}
