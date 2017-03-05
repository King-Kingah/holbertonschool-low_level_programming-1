#include <stdlib.h>
#include <stdio.h>

int main (int argc, char* argv[])
{
	int i;

	if(argc <= 0 && argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
	}
	return (0);
}
