#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - d
 * @n: file
 */

void print_diagonal(int n)
{
	int x, y;

	for (x = 1; x <= n; x++)
	{
		for (y = 1; y < x ; y++)
		{
			putchar(' ');
		}
		putchar('\');
		printf("\n");
	}
}
