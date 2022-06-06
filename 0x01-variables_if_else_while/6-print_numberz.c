#include <stdio.h>

/**
 * main - d
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar((ch % 10) + '0');
	}
	printf("\n");

	return (0);
}
