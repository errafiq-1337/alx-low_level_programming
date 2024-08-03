#include <stdio.h>

/**
 * main - main for dejit
 * Return: 0
**/

int main(void)
{
	int i = 48;

	while (i >= 48 && i <= 57)
	{
		putchar(i);
		if (i == 57)
		{
			putchar('\n');
			return (0);
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	return (0);
}
