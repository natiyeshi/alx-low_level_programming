#include <stdio.h>
#include "main.h"

/**
 * print_triangle - file
 * @size: s
 */
void print_triangle(int size)
{
	int x, y, z;

	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= (size - x); y++)
		{
			putchar(' ');
		}
		for (z = 1; z <= x; z++)
		{
			putchar('*');
		}
		printf("\n");
	}
}
