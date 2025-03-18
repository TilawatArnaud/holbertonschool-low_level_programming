#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything, followed by a new line
 * @format: format string representing the argument types
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char c;
	int num;
	float fl;

	va_start(args, format);
	while (format && format[i] != '\0')
	{
		if (i > 0)
			printf(", ");
		if (format[i] == 'c')
		{
			c = va_arg(args, int);
			printf("%c", c);
		}
		else if (format[i] == 'i')
		{
			num = va_arg(args, int);
			printf("%d", num);
		}
		else if (format[i] == 'f')
		{
			fl = va_arg(args, double);
			printf("%f", fl);
		}
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
