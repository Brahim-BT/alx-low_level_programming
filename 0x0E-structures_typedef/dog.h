#ifndef dog_h
#define dog_h
#include <stdio.h>
#include <stdlib.h>

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

/**
 * dog_t - here we're defining a new type of dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif