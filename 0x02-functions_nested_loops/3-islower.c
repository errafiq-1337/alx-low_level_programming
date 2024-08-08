#include "main.h"

/**
 * _islower - for checks for lowercase
 * @c: parameter or member
 * Return: 0 if otherwise and 1 if c is lowercase
**/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
