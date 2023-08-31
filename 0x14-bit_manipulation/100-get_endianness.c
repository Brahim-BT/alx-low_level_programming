#include "main.h"

/**
 * get_endianness - this functioni will check the endianness.
 * Return: 0 or 1.
 */
int get_endianness(void)
{
    unsigned int auxillary;

    char *componant;

    auxillary = 1;
    componant = (char *)&auxillary;
    return ((int)*componant);
}
