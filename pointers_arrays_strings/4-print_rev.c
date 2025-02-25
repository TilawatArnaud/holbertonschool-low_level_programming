#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: string
 */

void print_rev(char *s)
{
	while (*s != '\0')
	{
		s++;
	}

	s--

	while (s >= *s)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
