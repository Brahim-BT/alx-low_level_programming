#ifndef dog_h
#define dog_h
#include <stdio.h>
#include <stlib.h>

/**
* struct dog - the representation of the dog
* @name: the name of dog
* @age: the age of dog
* @owner: the owner of dog
*/
struct dog
{
    char *name;
    float age;
    char *owner;
};

#endif