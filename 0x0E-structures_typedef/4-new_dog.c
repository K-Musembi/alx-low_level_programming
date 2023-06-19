#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* new_dog - create a new dog
* @name: first input
* @age: second input
* @owner: third input
*
* Return: pointer
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy;

	puppy = malloc(sizeof(dog_t));
	if (puppy == NULL)
		return (NULL);

	puppy->name = name;
	puppy->age = age;
	puppy->owner = owner;
	return (puppy);
}
