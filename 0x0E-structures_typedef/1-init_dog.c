#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog
 * @name: pointer to name member
 * @age: age of dog
 * @owner: pointer to owner member
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)

		/* memory allocation should be done incase d is null */

		d = malloc(sizeof(struct dog));

	d->name = name;
	/* initialize name member of my_dog variable */

	d->age = age;
	/* initialize age member of my_dog variable */

	d->owner = owner;
	/* initalize owner member of my_dog variable */

}
