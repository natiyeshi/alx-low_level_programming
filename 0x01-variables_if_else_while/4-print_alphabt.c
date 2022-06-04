#include <stdio.h>

int main(void)
{
	char a = 'a';
	int i;

	for (i = 1; i <= 26; i++)
	{
		if (a != 'q' &&  a != 'e')
		{
			putchar(a);
		}
		a++;
	}
	printf("\n");

	return (0);
}
