#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* _strdup - Duplicates a string using malloc
* @str: The string to duplicate
*
* Return: A pointer to the newly allocated string
* or NULL if allocation fails
*/
char *_strdup(char *str)
{
	char *dup;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}
