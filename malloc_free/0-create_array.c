#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char
 * @size: size of the array
 * @c: char
 * Return: pointer to the array else 0 if size = null or if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
