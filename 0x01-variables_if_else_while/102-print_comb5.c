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
	int n;

	while (i >= 48 && i <= 57)
	{
		j = 48;
		while (j >= 48 && j <= 57)
		{
			k = 48;
			while (k >= 48 && k <= 57)
			{
				n = 48;
				while (n >= 48 && n <= 57)
				{
					if (i == j && j== k
                                                        && k == n)
						 return (0);
					else
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(n);
						if (i == '9' && j == '8' && k == '9' &&n == '9')
						{
							putchar('\n');
							return (0);
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
					n++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	return (0);
}
