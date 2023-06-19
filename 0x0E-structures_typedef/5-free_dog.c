#include <stdlib.h>
#include "dog.h"

/**
* free_dog - free struct variable
* @d: input
*
* Return: nothing
*/
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);

	free(d);
}
