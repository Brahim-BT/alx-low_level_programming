#include "main.h"
/**
 *_isupper - check if a char is upper
 *@c: character to check
 *Return: 1 if upper, esle 0
 */

int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    return (0);
}