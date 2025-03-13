#include "main.h"

/**
 * _sqrt_helper - helper function to find the square root recursively
 * @n: the number
 * @i: the current number being tested as a potential square root
 *
 * Return: the square root if it exists, -1 if it does not
 */
int _sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 1));
}
