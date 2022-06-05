#include <stdio.h>

/**
 * main - m
 * Return: 0
 */

int main(void)
{
	int ch;
	int temp;
	int lela;

	for (ch = '0'; ch <= '9'; ch++)
	{
		for (temp = '0'; temp <= '9'; temp++)
		{
			for (lela = '0'; lela <= '9'; lela++)
			{
				putchar(ch);
				putchar(temp);
				putchar(' ');
				putchar(temp);
				putchar(lela);
				if (ch == '9' && temp == '9' && lela == '9')
					continue;
				putchar(',');
			}
		}
	}
	printf("\n");

	return (0);
}
