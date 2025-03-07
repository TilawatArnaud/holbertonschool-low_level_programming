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
    if (*needle == '\0') // If needle is empty, return the whole haystack.
        return haystack;

    while (*haystack) // Traverse through haystack.
    {
        char *h = haystack; // Pointer to current position in haystack.
        char *n = needle;   // Pointer to current position in needle.

        // Compare the substring starting from current positions of haystack and needle.
        while (*h && *n && *h == *n)
        {
            h++;
            n++;
        }

        // If we've reached the end of needle, we've found a match.
        if (*n == '\0')
            return haystack;

        haystack++; // Move to the next character in haystack.
    }

    return NULL; // Return NULL if no match is found.
}
