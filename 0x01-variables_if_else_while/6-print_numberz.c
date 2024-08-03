#include <stdio.h>

/**
 * main - putchar alphabt
 * Return: 0
**/

int main(void)
{
	int i = 0;

	while (i >= 48 && i <= 57)
		putchar(i++);
	putchar('\n');
	return (0);
}
