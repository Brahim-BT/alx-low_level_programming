#include <stdio.h>
/**
 *main - Print nimber of arguments
 *@argc: Integer
 *@argv: String
 *Return: Always 0
 */

int main(int argc, char __attribute__((unused)) * argv[])
{
    printf("%d\n", --argc);
    return (0);
}
