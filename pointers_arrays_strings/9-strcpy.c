#include "main.h"
#include "2-strlen.c"
/**
 * strcpy - copy the string pointed to by src including the terminal null byte to the buffer pointed to by dest
 * dest: destination
 * src: string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int n = _strlen(dest);
	int i;

	for (i = 0; i <= n; i++)
	{
		src[i] = dest[i];
	}
	return (*dest);
}
