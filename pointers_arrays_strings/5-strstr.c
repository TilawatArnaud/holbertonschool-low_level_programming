#include "main.h"
/**
 * _strstr - Locates a substring in a string
 * @haystack: The main string to be searched
 * @needle: The substring to find
 * Return: A pointer to the beginning of the substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (*needle == '\0')
		return (haystack);
	while (*haystack)
	{
		h = haystack;
		n = needle;
		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
