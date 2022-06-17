#include "main.h"

/**
 * _strncat - file
 * @dest: file
 * @src: file
 * @n: number
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; i < n; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	dest[dlen + n +1] = '\0';

	return (dest);
}
