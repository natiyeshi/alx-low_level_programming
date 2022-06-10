#include <stdio.h>
#include "main.h"

/**
 * print_square - file
 * @size: file
 */

void print_square(int size)
{
	int x, y;

	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
			putchar('#');
		printf("\n");
	}
}
