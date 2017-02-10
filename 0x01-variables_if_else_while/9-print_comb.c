#include <stdio.h>

/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
	int n; /*not allowed to use char variable*/

	n = 48; /*48 corresponds with ASCII character 0*/

	while (n <= 57) /*57 corresponds with ASCII character 9*/
{
	putchar (n); /*output char beginning with 48*/
	n++; /*increment operand by 1 until reaching 57 */
}
	putchar ('\n'); /*add new line*/

	return (0);
}
