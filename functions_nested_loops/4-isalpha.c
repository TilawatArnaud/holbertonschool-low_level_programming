#include "main.h"

/**
 * _isalpha - functions that checks if characters are alphabetics
 * @c: Character to check
 *
 *  Return: 1 if alphabetics, 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
