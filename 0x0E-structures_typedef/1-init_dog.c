#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - structure of dog
 * @d: initializer
 * @name: name initializer
 * @age: age initializer
 * @owner: owner initializer
 *
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
