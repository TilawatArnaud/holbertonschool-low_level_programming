#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * @c: string that's tested
 * Return: 1 lower case, 0 not lower case
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
