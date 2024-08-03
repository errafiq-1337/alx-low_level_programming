#include <stdio.h>

/**
 * main - putchar alphabt
 * Return: 0
**/

int main(void)
{
	int *str = {0,1,2,3,4,5,6,7,8,9};

	while (*str)
		putchar(*str++);
	return (0);
}
