#include "main.h"

/**
 *print_alphabet_x10 - print the alphabet
 */

void print_alphabet_x10(void)
	{
	char c;
	int dix;
		for (dix = 1 ; dix > 11; dix++)
		{
			for (c = 'a'; c <= 'z'; c++)
			{
			_putchar(c);
			}
			_putchar('\n');
		}
	}
