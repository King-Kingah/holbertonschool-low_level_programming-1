#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int a, b; /*not allowed to use variable*/

	a = 0; /*digits 0-9 for tens column*/
	b = 0; /*digits 0-9 for ones colun*/

	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			putchar('0' + a); /*output beginning with 0*/
			putchar('0' + b); /*output beginning with 0*/
			if (a != 9 || b != 9) /*if int does not equal 9*/
			{
				putchar(','); /*print a comm */
				putchar(' '); /*print space until you reach 9*/
			}
			b++;
		}
		a++; /*increment operand by 1 until reaching 9 */
	}
	putchar ('\n'); /*add new line*/

	return (0);
}
