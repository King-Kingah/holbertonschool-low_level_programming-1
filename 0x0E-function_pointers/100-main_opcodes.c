#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints opcode of own main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success,
 *1 if number of arg not correct,
 *2 if number of bytes is negative
 */

int main(int argc, char *argv[])
{
	int bytes;
	int i = 0;
	unsigned char *a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	a = (unsigned char *)main;
	if (bytes > 0)
	{
		printf("%x\n", a[i]);
	}
	return (0);
}
