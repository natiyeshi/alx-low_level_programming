#include <stdio.h>
#include "main.h"

/**
 * print_sign - file
 * @n: file
 * Return: 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');

		return (0);
	}
	else if (n < 0)
	{
		putchar('-');

		return (-1);
	}
}
