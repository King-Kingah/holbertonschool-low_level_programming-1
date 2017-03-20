#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - print strings, then a new line
 * @separator: char string used to separate strings
 * @n: number of string args passed to function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *a;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		a = va_arg(list, char *);
		if (a == NULL)
			printf("(NIL)");
		else
			printf("%s", a);
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(list);
}
