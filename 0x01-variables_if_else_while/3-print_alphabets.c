#include <stdio.h>

int main(void)
{
	char a = 'a';
	int i;

	for (i = 1; i <= 52; i++)
	{
		putchar(a);
		a++;
		if (i == 26)
		{
			a = 'A';
		}
	}
	printf("\n");

	return (0);
}
