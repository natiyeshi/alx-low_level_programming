#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - file
 * @str: str
 */

void puts2(char *str)
{
	int i, length;

	length = strlen(str);
	for (i = 0; i < length; i+=2)
	{
		printf("%c", str[i]);
	}
}
