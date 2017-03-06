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
	int j;
	int sum = 0;
	char *p;

	if (argc == 0)
	{
		return (0);
		printf("\n");
	}
	else
	{
		for (i = 1; argv[i]; i++)
	 	{
			j += strtol(argv[i], &*p, 10);
			if (!*p)
			{
				sum += j;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
