#include "main.h"

/**
 * _strncpy - file
 * @dest: new
 * @src: new
 * @n: new
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
}
