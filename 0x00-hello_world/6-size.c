#include <stdio.h>

/**
 * main - entry pint
 * Return: return
 */

int main(void)
{
	int INT;
	float FLOAT;
	char CHAR;
	long int LINT;
	long long int LLINT;

	printf("Size of a char: %zu bite(s)\n", sizeof(CHAR));
	printf("Size of an int: %zu bite(s)\n", sizeof(INT));
	printf("Size of a long int: %zu bite(s)\n", sizeof(LINT));
	printf("Size of a long long int: %zu bite(s)\n", sizeof(LLINT));
	printf("Size of a float: %zu bite(s)\n", sizeof(FLOAT));
	return (0);
}
