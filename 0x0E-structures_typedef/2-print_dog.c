#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints struct dog
 * @d: pointer to struct dog
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	/*control will be back to caller if ptr has null value */
	if (d->name == NULL)
		printf("Name: (nill)\n");
	if (d->age == '\0')
		printf("Age: (nill)\n");
	if (d->owner == NULL)
		printf("Owner: (nill)");
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
