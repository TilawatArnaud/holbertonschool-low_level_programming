#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string
 */

void puts2(char *str)
{
	int i;

	i = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		str + 2;
	}
	_putchar('\n');
}