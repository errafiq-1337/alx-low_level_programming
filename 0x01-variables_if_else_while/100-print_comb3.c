#include <stdio.h>

/**
 * main - put a nmbres
 * Return: 0
**/

int main(void)
{
	int i = 48;
	int j;

	while (i >= 48 && i <= 57)
	{
		j = i + 1;
		while (j >= 48 && j <= 57)
		{
			putchar(i);
			putchar(j);
			if (i == '8' && j == '9')
			{
				putchar('\n');
				return (0);
			}
			else
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
