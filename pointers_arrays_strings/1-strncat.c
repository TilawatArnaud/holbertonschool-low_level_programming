#include "main.h"
/**
 * _strncat - function that concatenates two strings limited by n
 * @dest: first string
 * @src: second string
 * @n: number of bytes copied from src
 * Return: the 2 strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
