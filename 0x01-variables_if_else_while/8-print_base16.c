#include <stdio.h>

/**
 * main - d
 * Return: dd
 */

int main(void)
{
	int num;
	int hex = '0';
	char ch = 'a';

	for (num = 0; num < 16; num++)
	{
		if (num < 10)
			putchar(hex++);
		else
			putchar(ch++);
	}
	printf("\n");

	return (0);
}
