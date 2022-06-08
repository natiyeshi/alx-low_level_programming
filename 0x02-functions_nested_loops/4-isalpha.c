#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - discribe
 * @c: dfasi
 * Return: 0 1
 */

int _isalpha(int c)
{
	if (c > 64 && c < 123)
	{
		return (1);
	}
	return (0);
}
