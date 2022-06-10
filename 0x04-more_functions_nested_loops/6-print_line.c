#include <stdio.h>
#include "main.h"

/**
 * print_line - file
 * @n: n
 */

void print_line(int n)
{
	int x;

	for (x = 1; x <= n; x++)
		putchar("_");
	printf("\n");
}
