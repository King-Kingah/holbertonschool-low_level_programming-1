#include "holberton.h"
/**
 *reverse_array -  this function reverses the content of an array of integers
 *@a: array of integers
 *@n: the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp = 0;

	n = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i];
		a[n - i] = temp;
	}
}
