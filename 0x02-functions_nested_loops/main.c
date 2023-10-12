#include "main.h"

/**
 * test_islower - Test the _islower function
 *
 * @n: Number to pass to _islower function
 */
void test_islower(int n)
{
	int c;

	c = _islower(n);
	_putchar(c + '0');
	_putchar('\n');
}

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	test_islower('H');
	return (0);
}

