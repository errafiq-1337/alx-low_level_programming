#include <stdio.h>

/**
 * main - put a nmbres
 * Return: 0
**/

int main(void)
{
	int i = 0;
	int j;

	while (i >= 0 && i <= 99)
	{
		j = i + 1;
		while (j >= 0 && j <= 99)
		{
			putchar(i / 10 + 48);
			putchar(i % 10 + 48);
			putchar(' ');
			putchar(j / 10 + 48);
                        putchar(j % 10 + 48);
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	return (0);
}
