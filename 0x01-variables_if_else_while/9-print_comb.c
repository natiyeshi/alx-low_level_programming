#include <stdio.h>

/**
 * main - d
 * Return: d
 */

int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
		if (ch != '9')
		{
			putchar(',');
			putchar(' ');
		}

	}
	printf("\n");

	return (0);
}
