#include <stdio.h>
#include <ctype.h>

/**
 * _islower - file
 * @c:  fils
 * Return: 0
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}

	return (0);
}
