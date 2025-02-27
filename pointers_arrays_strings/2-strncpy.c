#include "main.h"

/**
 * _strncpy - Copies the string pointed to by src, including the
 *           terminating null byte (\0), to the buffer pointed to by dest.
 * 			 limited by n bytes
 * @dest: Destination buffer.
 * @src: Source string.
 * @n: bytes limit
 * Return: Pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
