#include "main.h"

/**
 * _abs - function that transform a number to it's absolute value
 *
 * @n: number to transform
 *
 *  Return: Always 0
 */

int _abs(int n)
{
	if (n > 0 || n == 0)
	{
	_putchar(n);
	return (0);
	}
	else
	{
	n = (n) * (-1);
	_putchar(n);
	return (0);
	}
}
