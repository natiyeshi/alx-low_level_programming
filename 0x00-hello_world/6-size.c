#include <stdio.h>

int main(void)
{
	int INT;
	float FLOAT;
	char CHAR;
	long int LINT;
	long long int LLINT;

	printf("Size of a char: %zu bite(s)\n", sizeof(CHAR));
	printf("size of an int: %zu bite(s)\n", sizeof(INT));
	printf("size of a long iny: %zu bite(s)\n", sizeof(LINT));
	printf("size of a long long int: %zu bite(s)\n", sizeof(LLINT));
	printf("size of a float: %zu bite(s)\n", sizeof(LLINT));
	
	return (0);
}
