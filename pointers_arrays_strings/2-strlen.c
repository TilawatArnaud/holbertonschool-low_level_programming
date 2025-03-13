#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string to get checked
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
