#include "stdio.h"

/**
 * print_alphabet - print all alphabet in lowercase
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		fputc(letter, stdout);

	}
	fputc('\n', stdout);

	print_alphabet();
	return (0);
}
