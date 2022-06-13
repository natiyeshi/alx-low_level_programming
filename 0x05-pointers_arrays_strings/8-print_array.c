#include <stdio.h>
#include "main.h"

/**
 * print_array - file
 * @a: file
 * @n: num
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < 5 ; i++)
	{
		printf("%d, ", *(a + i));
	}
	printf("%d");
}
