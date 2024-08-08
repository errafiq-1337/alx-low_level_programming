#include "main.h"

/**
 * print_alphabet - for print alpha
 */
void print_alphabet(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (alpha[i])
		_putchar(alpha[i++]);
	_putchar('\n');
}
