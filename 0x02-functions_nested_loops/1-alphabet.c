#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_alphabet - Entry point
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
{
		putchar(c);
		c++;
}
	putchar('\n');
}
