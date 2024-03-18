#include "dog.h"

/* */
/**
* init_dog - function that initialize a variable of type struct dog
* @d: pointer to the struc
* @name: name of the dog
* @age: age of the dog
* @owner: owner name
* Return:  pointer to new memory space
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog;

	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}


