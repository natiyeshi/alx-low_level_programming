#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - file
 * @s: point
 */

void print_rev(char *s)
{
	char temp;
	int i, length;

	length = strlen(s) - 1;
	for (i = 0; i < strlen(s) / 2; i++)
	{
		temp = s[i];
		s[i] = s[length];
		s[length] = temp;
		length--;
	}
	printf("\n");
}
