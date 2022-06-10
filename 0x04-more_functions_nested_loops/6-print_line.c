#include <stdio.h>
#include "main.h"

/**
 * print_line - file
 * @n: n
 */

void print_line(int n)
{
	int x;

	for (x = n; x > 0; x--)
		putchar("_");
	printf("\n");
}
