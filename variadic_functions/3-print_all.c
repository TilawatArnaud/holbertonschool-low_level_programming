#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints all arguments based on the format specifiers.
 * @format: A string containing the format specifiers.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char c;
	int num;
	float f;
	int printed = 0;

	va_start(args, format);
	while (format && format[i])
	{
		if (printed)
			printf(", ");
		if (format[i] == 'c')
			printf("%c", va_arg(args, int));
		if (format[i] == 'i')
			printf("%d", va_arg(args, int));
		if (format[i] == 'f')
			printf("%f", va_arg(args, double));
		if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (str)
				printf("%s", str);
			if (!str)
				printf("(nil)");
		}
		if (format[i] == 'c' || format[i] == 'i' ||
		 format[i] == 'f' || format[i] == 's')
			printed = 1;
		i++;
	}
	printf("\n");
	va_end(args);
}
