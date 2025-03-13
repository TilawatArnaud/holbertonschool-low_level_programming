#include "main.h"

/**
 *print_alphabet_x10 - print the alphabet
 */

void print_alphabet_x10(void)
	{
	int dix;
	char c;

		for (dix = 0 ; dix < 10; dix++)
		{
			for (c = 'a'; c <= 'z'; c++)
			{
				_putchar(c);
			}

			_putchar('\n');
		}
	}
