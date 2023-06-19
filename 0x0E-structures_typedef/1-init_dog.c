#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
* init_dog - initialize variable of type struct dog
* @d: first input
* @name: second input
* @age: third input
* @owner: fourth input
*
* Return: nothing
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->name = name;
	d->age = age;
	d->owner = owner;
}
