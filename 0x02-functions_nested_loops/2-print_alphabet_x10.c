#include <stdio.h>

/**
 * main - file
 * Return: 0
 */
void print_alphabet_x10(void);

int main(void)
{
	print_alphabet_x10();

	return (0);
}

/**
 * print_alphabet_x10 - new file
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int r = 0;
	char ch;

	while (r != 10)
	{
		ch = 'a';
		while (ch != 'z')
		{
			putchar(ch);
			ch++;
		}
		printf("\n");
		r++;
	}
}
