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
	int first = 1;

	va_start(args, format);

	while (format && format[i])
	{
		if (!first && (format[i] == 'c' || format[i] == 'i'
		 || format[i] == 'f' || format[i] == 's'))
			printf(", ");
		if (format[i] == 'c')
			printf("%c", va_arg(args, int));
		else if (format[i] == 'i')
			printf("%d", va_arg(args, int));
		else if (format[i] == 'f')
			printf("%f", va_arg(args, double));
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
		}
		first = 0;
		i++;
	}

	printf("\n");
	va_end(args);
}
