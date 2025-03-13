#include "main.h"
#include <stddef.h> /* Ensure NULL is recognized */

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The main string to be scanned
 * @accept: The string containing the characters to match
 *
 * Return: A pointer to the first matching character in s, or NULL if none
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
