#include "dog.h"
void print_dog(struct dog *d)
{
	struct dog;

	if (d != NULL)
	{
		printf("Name: %s\n",d->name);
		printf("Age: %.6f\n",d->age);
		printf("Owner: %s\n",d->owner);
	}
	if (d == NULL)
		puts("");
	if (d->name == NULL)
		puts("Name: (nil)\n");
	if (d->owner == NULL)
		puts("Owner: (nil)\n");

}
