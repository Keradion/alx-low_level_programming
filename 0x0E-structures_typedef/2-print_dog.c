#include "dog.h"
#include <stdio.h>

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
	else
		 printf("Name: %s\n", (d->name));
	if (d->age == '\0')
		printf("Age: (nill)\n");
	else
		printf("Age: %f\n", (d->age));
	if (d->owner == NULL)
		printf("Owner: (nill)\n");
	else
		printf("Owner: %s\n", (d->owner));
}
