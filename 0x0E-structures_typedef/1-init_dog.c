#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - intializes a variable of type struc dog
 * @name: dog name
 * @owner: dog owner
 * @age: dog age
 * @d: struc variable
 *
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
