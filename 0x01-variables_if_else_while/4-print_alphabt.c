#include <stdio.h>

/**
 * main - putchar alphabt
 * Return: 0
**/

int main(void)
{
	char *str = "abcdfghijklmnoprstuvwxyz\n";

	while (*str)
		putchar(*str++);
	return (0);
}