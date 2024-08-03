#include <stdio.h>

/**
 * main - putchar alphabt
 * return: 0
**/

int main(void)
{
	char *str = "abcdefghijklmnopqrstuvwxyz\n";

	while (*str)
		putchar(*str++);
	return (0);
}
