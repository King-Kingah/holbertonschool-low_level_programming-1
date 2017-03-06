#include <stdlib.h>
#include <stdio.h>
/**
 *main - add positive numbers
 *@argc: argument count
 *@argv: argument array
 *Return: sum of two arguments,
 *return 1 for error, return 0 if no numbers in arg
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int sum = 0;

	if (argc == 0)
	{
		return (0);
		printf("\n");
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
