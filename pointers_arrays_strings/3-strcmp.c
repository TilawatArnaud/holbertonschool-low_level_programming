#include "main.h"
/**
 * _strcmp - compare 2 strings
 * @s1: first string
 * @s2: second string
 * Return: result of the difference of the 2 strings
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
