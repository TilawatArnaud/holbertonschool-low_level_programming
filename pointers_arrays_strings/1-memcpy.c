#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: from this memory area
 * @src: to this one
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
