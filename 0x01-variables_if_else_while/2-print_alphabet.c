#include <stdio.h>

/**
 * main - for a program that prints the alphabet in lowercase
 * return: 0
**/

int main(void)
{
	char *str = "abcdefghijklmnopqrstuvwxyz";
	while (*str)
		putchar(*str++);
	return (0);
}
