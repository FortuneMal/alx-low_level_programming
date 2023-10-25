#include "main.h"
/**
 *_strlen_recursion - returns the length of a string.
 *@s: string
 *Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
	int i =0;
	if (*s)
	{
		i++;
		 _strlen_recursion(*s);
	}
	return (i);
}
