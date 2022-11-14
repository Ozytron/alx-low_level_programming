#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog.
 * @d: The dog to print.
 */

void print_dog(struct dog *d)
{
	char *name, *owner;
	float age;

	name = d->name;
	age = d->age;
	owner = d->owner;
	printf("Name: %s\n", name);
	printf("Age: %f\n", age);
	printf("Owner: %s\n", owner);
}
