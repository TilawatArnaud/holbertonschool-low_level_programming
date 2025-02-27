#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	// Reverse the array in place
	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}

	// Print the reversed array
	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			_putchar(','); // Print comma for separation
			_putchar(' ');
		}
		_putchar(a[i] + '0'); // Convert integer to character for printing
	}
	_putchar('\n');
}
