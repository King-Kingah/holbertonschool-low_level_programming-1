#include "variadic_functions.h"
/**
 * sum_them_all - return the sum of all parameters
 * @n: number of arguments passed to function
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);

	return (sum);
}
