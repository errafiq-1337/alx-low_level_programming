#include <stdio.h>

/**
 * main - putchar alphabt
 * Return: 0
**/

int main(void)
{
	char *str = "0123456789abcdef\n";

	while (*str)
		putchar(*str++);
	return (0);
}
