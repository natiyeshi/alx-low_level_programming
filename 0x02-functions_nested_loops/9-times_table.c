#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void times_table(void);

int main(void)
{
	times_table();

	return (0);
}

/**
 * times_table - f
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 9)
				printf("%d", j * i);
			else
				printf("%d, ", j * i);
		}
		printf("\n");
	}
}
