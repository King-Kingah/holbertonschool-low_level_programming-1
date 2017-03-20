#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _printchar - print char type element from va_list
 * @list: va_list passed to function
 */
void _printchar(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * _printstr - print string element from va_list
 * @list: va_list passed to function
 */
void _printstr(va_list list)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * _printfloat - print float type element from va_list
 * @list: va_list passed to function
 */
void _printfloat(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * _printint - print int type element from va_list
 * @list: va_list passed to function
 */
void _printint(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_all - print anything passed no matter what type
 * @format: string of formats to reference
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list list;
	char *a = "";;

	va_start(list, format);
	while (format != NULL && format[i / 4] != '\0')
	{
		printf("%s", a);
		i++;
	}
	printf("\n");
	va_end(list);
}
