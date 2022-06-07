#include <stdio.h>

/**
 * main - d
 * Return: 0
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();

	return (0);
}

/**
 * print_alphabet - emdk
 * Return: void
 */

void print_alphabet(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

}
