#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - a
 * @l: l
 * Return:0
 */

int print_last_digit(int l)
{
	if (l < 0)
		l = -1 * l;
	printf("%d", l % 10);
	return (l % 10);
}
