#include <stdio.h>

/**
 *main - print numbers 1 to 100
 *
 *return: print to stdout numbers 1 to 100 except:
 *replace multiples of three print Fizz
 *replace multiples of four print Buzz
 */
int main(void)
{
	int a;

	for(a = 0; a<=100; a++)
	{
		if((a % 3) == 0)
		{
			printf("Fizz");
		}
		else if((a % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ",a);
		}
	}
	printf("\n");

	return(0);
}
