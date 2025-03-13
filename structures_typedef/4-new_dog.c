#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - checks the length of a string
 * @s: string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * _strcpy - copy a string
 * @dest:destination
 * @src: source
 * Return: copy of string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - new structure
 * @name: new's
 * @age: new's
 * @owner: new's
 * Return: NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(_strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->name, name);

	new_dog->owner = malloc(_strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->owner, owner);

	new_dog->age = age;

	return (new_dog);
}
