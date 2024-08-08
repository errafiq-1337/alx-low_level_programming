#include "main.h"

/**
 * _isalpha - for checks alphabet
 * @c: parameter or member
 * Return: 0 if otherwise and 1 if c is lowercase
**/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
