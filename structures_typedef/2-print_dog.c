#include "dog.h"
/* */
/**
* print_dog - function that hat prints a struct dog
* @d: pointer to struc
*/
void print_dog(struct dog *d)
{
	struct dog;

	if (d != NULL && d->name != NULL && d->owner != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	if (d->name == NULL)
	{
		puts("Name: (nil)\n");
		printf("Age: %.6f\n", d->age);
		puts("Owner: (nil)\n");
	}

}
