#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - fda
 */

void print_most_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		if (x != 2 && x != 4)
			printf("%d", x);
	}
	printf("\n");
}
