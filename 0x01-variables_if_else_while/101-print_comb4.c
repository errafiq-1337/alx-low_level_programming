#include <stdio.h>

/**
 * main - put a nmbres
 * Return: 0
**/

int main(void)
{
	int i = 48;
	int j;
	int k;

	while (i >= 48 && i <= 57)
	{
		j = i + 1;
		while (j >= 48 && j <= 57)
		{
			k = j + 1;
			while (k >= 48 && k <= 57)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == '7' && j == '8' && k == '9')
				{
					putchar('\n');
					return (0);
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	return (0);
}
