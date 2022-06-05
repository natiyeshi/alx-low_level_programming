#include <stdio.h>

/**
 * main - d
 * Return:
 */

int main(void)
{
	int ch;
	int num;

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
