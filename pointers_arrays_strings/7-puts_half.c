#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int i, len = 0;

	i = 0;

	while (*str != '\0')
	{
		len++;
		str++;
		if (len == *str / 2)
			_putchar(str[i]);
	}
	_putchar('\n');
}