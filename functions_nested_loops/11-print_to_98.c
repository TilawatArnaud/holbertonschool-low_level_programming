#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: first number to get printed to 98
 */

void print_to_98(int n)
{
	int i;
	if(n < 98)
	{
		for(i = n; i < 98; i++)
		{
			printf("%d, ",i);
			printf("98\n");
		}
	}
	else if (n > 98)
	{
		for(i = n; i > 98; i++)
		{
			printf("%d, ",i);
			printf("98\n");
		}
	}
	else
	printf("98\n");
}
