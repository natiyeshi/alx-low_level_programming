#include <stdio.h>

/**
 * main - main
 * Return: 0
 */

int main(void)
{
	int ch;
	int num;

	for (ch = '0'; ch <= '9'; ch++)
	{
		for (num = ch; num <= '9'; num++)
		{
			if (ch == num)
				continue;
			putchar(ch);
			putchar(num);
			putchar(',');
			putchar(' ');
		}
	}
	printf("\n");

	return (0);
}
