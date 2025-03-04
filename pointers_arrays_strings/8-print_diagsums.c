#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sums of the 2 diagonals of the array
 * @a: pointer to the first element
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
    int i;
    int primary_diag_sum = 0;
    int secondary_diag_sum = 0;

    for (i = 0; i < size; i++)
    {
        primary_diag_sum += *(a + i * size + i);
        secondary_diag_sum += *(a + i * size + (size - i - 1));
    }

    printf("%d, %d\n", primary_diag_sum, secondary_diag_sum);
}
