#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 */

void reverse_array(int *a, int n)
{
	int i;

	i = n;
	while (n <= i)
	{
		if (i != 0)
		{
			_putchar(',');
			_putchar(' ');
		}
		_putchar(a[i]);
		i--;
	}
	_putchar('\n');
}
