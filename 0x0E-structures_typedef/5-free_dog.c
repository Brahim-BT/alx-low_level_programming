#include "dog.h"

/**
* free_dog - free dog
* @d: the dog that is going to be freed
* Return: 0
*/

void free_dog(dog_t *d)
{
    if (d!= NULL)
    {
        free(d->name);
        free(d->owner);
        free(d);
    }
}