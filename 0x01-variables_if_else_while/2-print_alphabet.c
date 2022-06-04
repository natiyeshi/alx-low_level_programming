#include <stdio.h>

int main(void)
{
	char a = 'a';
	int i;

	for (i = 1; i <= 26; i++)
	{
		putchar(a);
		a++;
	}
	printf("\n");

	return (0);
}

