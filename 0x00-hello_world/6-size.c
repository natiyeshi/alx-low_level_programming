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

	printf("Size of a char: %zu byte(s)\n", sizeof(CHAR));
	printf("Size of an int: %zu byte(s)\n", sizeof(INT));
	printf("Size of a long int: %zu byte(s)\n", sizeof(LINT));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(LLINT));
	printf("Size of a float: %zu byte(s)\n", sizeof(FLOAT));
	return (0);
}
