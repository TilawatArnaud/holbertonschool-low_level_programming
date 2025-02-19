#include "main.h"

/**
 * print_sign - function thats check the sign of a number
 *
 * @n: Character to check
 *
 * Return: 1 if number is greater than 0
 * 0 if number is equal to 0
 * and -1 if number is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
