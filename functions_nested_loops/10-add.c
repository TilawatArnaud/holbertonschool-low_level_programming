#include "main.h"

/**
 * add - function that adds 2 number together
 *
 * @a: first number to add
 * @b: second number to add
 *
 * Return: the result of the addition
 */

int add(int a, int b)
{
	int c;

	c = a + b;
	if (c >= 10)
		_putchar(c / 10 + '0');
	_putchar(c % 10 + '0');
	_putchar('\n');
	return (c);
}
