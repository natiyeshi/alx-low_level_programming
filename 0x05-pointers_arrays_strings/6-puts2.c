#include "mian.h"
#include <stdio.h>

/**
 * puts2 - file
 * @str: str
 */

void puts2(char *str)
{
	int i, length;

	length = strlen(str);
	for (i = 0; i < length; i++)
	{
		if (str[i] % 2 == 0)
			puts(str[i]);
	}
}
