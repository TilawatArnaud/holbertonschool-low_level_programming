#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The main string to search in.
 * @needle: The substring to find.
 *
 * Return: A pointer to the first occurrence of needle in haystack,
 * or NULL if needle is not found.
 */
char *_strstr(char *haystack, char *needle)
{
    int i, j;

    if (*needle == '\0')
        return (haystack);

    while (*haystack)
    {
        i = 0;
        
        while (haystack[i] == needle[i] && needle[i] != '\0')
        {
            i++;
        }

        if (needle[i] == '\0')
            return (haystack);

        haystack++;
    }

    return (NULL);
}
