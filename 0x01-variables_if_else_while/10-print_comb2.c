#include <stdio.h>

/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
	int a, b; /*not allowed to use char variable*/

	a = 0; /*digits 0-9 for tens column*/
	b = 0; /*digits 0-9 for ones column*/

	while (a <= 9) /*as long as tens column less than or equal to 9*/
	{
		b = 0; /*start with 0 in ones column*/
		while (b <= 9) /*runs when ones column less than equal to 9*/
		{
			putchar('0' + a); /*output char beginning with 0*/
			putchar('0' + b); /*output char beginning with 0*/
			if (a != 9 || b != 9) /*if ones/ does not equal 9*/
			{
				putchar(','); /*print a comma */
				putchar(' '); /*print a space*/
			}
			b++;
		}
		a++; /*increment operand by 1 until reaching 9 */
	}
	putchar ('\n'); /*add new line*/

	return (0);
}
