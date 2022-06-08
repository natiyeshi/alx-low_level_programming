#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - file
 * @n: f
 * Return:0
 */

void print_to_98(int n)
{
	int i = 0;

	if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(",");
		}
	}
	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			putchar(n + '0');
			if (i != 90)
				printf(", ");
		}
	}
}
