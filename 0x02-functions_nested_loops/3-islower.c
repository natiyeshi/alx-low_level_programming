#include <stdio.h>
#include <ctype.h>
/**
 * main - d
 * Return: 0
 */

/**
 *@c: fils
 */
int _islower(int c);

int main(void)
{
	int r;

	r = _islower('H');
	putchar(r + '0');
	r = _islower('o');
	putchar(r + '0');
	r = _islower(108);
	putchar(r + '0');
	putchar('\n');

	return (0);
}

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
