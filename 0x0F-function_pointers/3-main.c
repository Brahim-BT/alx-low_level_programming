#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - the main function.
 * @argc: int argument
 * @argv: int argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
    int m, n;

    char *operation;

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }
    operation = argv[2];
    m = atoi(argv[1]);
    n = atoi(argv[3]);
    if (get_op_func(operation) == NULL || operation[1] != '\0')
    {
        printf("Error\n");
        exit(99);
    }
    if ((n == 0) && (*operation == '/' || *operation == '%'))
    {
        printf("Error\n");
        exit(100);
    }
    printf("%d\n", get_op_func(operation)(m, n));
    return (0);
}
