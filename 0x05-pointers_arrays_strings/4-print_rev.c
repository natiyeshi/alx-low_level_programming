#include "main.h"

/**
 * print_rev - file
 * @s: point
 */

void print_rev(char *s)
{
	char temp;
	int i, length, j;

	length = sizeof(s);
	j = length - 1;
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j--;
	}
	printf("\n");
}
