#include "holberton.h"

/**
 * _islower - check for lowercase character
 *
 * return: check c for lowercase
 */
int _islower(int c)
{
	if ( c <= 'z' && c >= 'a')
		return(1);
	return(0);
}
