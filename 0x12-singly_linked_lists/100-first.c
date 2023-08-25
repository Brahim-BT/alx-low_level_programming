#include "lists.h"

/**
* pre_main - this function will execut code before main function for us.
* Return: void
*/

void __attribute__ ((__constructor__)) pre_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}