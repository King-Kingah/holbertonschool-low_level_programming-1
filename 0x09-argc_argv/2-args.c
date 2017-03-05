#include <stdio.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc >= 0)
	{
		for(i = 0; i < argc; i++)
		{
			printf("argv[%d] = %s\n", i, argv[i]);
			printf("argv[%d] = %s\n", i, argv[i]);
		}
	}

	return (0);
}
