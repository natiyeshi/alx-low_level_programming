#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strcat - file
 * @dest: f
 * @src: d
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int len, size, j;

	j = 0;
	len = sizeof(dest);
	size = sizeof(src);
	for (i = len; i < size + len; i++)
	{
		dest[i] = src[j++];
	}

	return (dest);
}
