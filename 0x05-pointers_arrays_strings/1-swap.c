#include "main.h"

/**
 * swap_int - file
 * @a: point
 * @b: point
 */

void swap_int(int *a, int *b)
{
	int temp1 = *a;
	int temp2 = *b;

	*a = temp2;
	*b = temp1;
}
