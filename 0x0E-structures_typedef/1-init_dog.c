#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes the  variable
 * @d: points the dog structure
 * @name: initialised name of the dog
 * @age: initialized age of the dog
 * @owner:  initialised owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d = malloc(sizeof(struct dog));
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
