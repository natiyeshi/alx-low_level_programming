#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts_half - file
 * @str: str
 */
void puts_half(char *str)
{
	int i, length, l;

	l = strlen(str);
	length = strlen(str) % 2 == 0 ? strlen(str) / 2 : (strlen(str) - 1) / 2;
	for (i = length; i < l; i++)
		printf("%c", str[i]);
	printf("\n");
}
