#include "main.h"

/**
 * _strncat - file
 * @*dest: file
 * @src: file
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int dint;
	
	for (dint = 0; dint < n; dint++)
	{
		dest[dint] = src[dint];
	}

	return (dest);
}
