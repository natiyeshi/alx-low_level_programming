#include <stdio.h>
#include <ctype.h>

/**
 * main - file
 * Return: 0
 */

/**
 * @c: file
 */

int _isalpha(int c);

int main(void)
{
	int r;

	r = _isalpha('H');
	putchar(r + '0');
	r = _isalpha('o');
	putchar(r + '0');
	r = _isalpha(108);
	putchar(r + '0');
	r = _isalpha(';');
	putchar(r + '0');
	printf("\n");

	return (0);
}

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
