#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts_half - file
 * @str: str
 */
void puts_half(char *str)
{
	int i, length;

	length = strlen(str) % 2 == 0 ? strlen(str) / 2 : (strlen(str) - 1) / 2;
	for (i = length; i < strlen(str); i++)
		printf("%c", str[i]);
	printf("\n");
}
