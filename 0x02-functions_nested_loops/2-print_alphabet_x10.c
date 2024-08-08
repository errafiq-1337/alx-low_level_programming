#include "main.h"

/**
 * print_alphabet_x10 - for print alpha 10
 */
void print_alphabet_x10(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int j = 0;

	while (j >= 0 && j <= 9)
	{
		i = 0;
		while (alpha[i])
			_putchar(alpha[i++]);
		_putchar('\n');
		j++;
	}
}
