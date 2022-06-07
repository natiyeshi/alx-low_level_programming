#include <stdio.h>

/**
 * main - f
 * Return: 0
 */

/**
 * @int: fil
 */

int _abs(int);

int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);

	return (0);
}

/**
 * _abs - f
 * @a: f
 * Return: 0
 */

int _abs(int a)
{
	if (a < 0)
		return (-1 * a);
	return (a);
}
