#include "main.h"

/**
 * print_most_numbers - print the number
 */

void print_most_numbers(void)
{
	int i;

	i = '0';
	if (i >= '0' && i <= '9')
	{
		i++;
	else if (i != '2' && i != '4')
	{
		_putchar(i);
	}
	}
	_putchar('\n');
}
