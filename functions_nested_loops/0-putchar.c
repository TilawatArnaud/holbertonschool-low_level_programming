#include "main.h"
#include <unistd.h>

int _putchar (char c)
{
	return write(1, &c, 1);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *str = "_putchar";

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');

	return (0);
}
