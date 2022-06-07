#include <stdio.h>

/**
 * main - file
 * Return: 0
 */

/**
 * @int: j
 */

int print_last_digit(int);

int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	putchar('0' + r);
	putchar('\n');

	return (0);
}

/**
 * print_last_digit - a
 * @l: l
 * Return:0
 */

int print_last_digit(int l)
{
	if (l < 0)
		l = -1 * l;
	printf("%d", l % 10);
	return (l % 10);
}
