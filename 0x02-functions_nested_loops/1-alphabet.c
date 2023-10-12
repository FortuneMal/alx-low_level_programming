#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * prints alphabet in lowercase
 *
 * no return.
 */
void print_alphabet()
{
	char c = 'a';

	while (c <= 'z')
{
		putchar(c);
		c++;
}
	putchar('\n');
	return;
}
