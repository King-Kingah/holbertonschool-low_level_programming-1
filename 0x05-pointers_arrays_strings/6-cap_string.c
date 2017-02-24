#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: character string
 *
 * Return: string with upper case
 */

char *cap_string(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		if (i == 0)
		{
			str[i] -= 32;
		}
		else if (str[i - 1] == ','||';'||'.'||'!')
			str[i] -= 32;
		}
	}
	return (str);
}
