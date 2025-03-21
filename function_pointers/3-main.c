#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Performs simple operations
 * @argc: The number of arguments
 * @argv: Array of arguments
 * Return: 0 if successful, otherwise an error code
 */
int main(int argc, char *argv[])
{
    int num1, num2;
    int (*op_func)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    if (!isdigit(argv[1][0]) || !isdigit(argv[3][0]))
    {
        printf("Error\n");
        exit(98);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);

    op_func = get_op_func(argv[2]);

    if (op_func == NULL)
    {
        printf("Error\n");
        exit(99);
    }

    if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && num2 == 0)
    {
        printf("Error\n");
        exit(100);
    }

    printf("%d\n", op_func(num1, num2));

    return (0);
}