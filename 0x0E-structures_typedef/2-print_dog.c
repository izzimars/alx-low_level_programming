#include "dog.h"
#include <stdio.h>

/**
 * print_dog- Entry point
 * Description: 'the program's description'
 * @d: First operand
 *
 * Return: An int
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (!(d->name))
		printf("Name: (nil)\n");
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (!(d->owner))
		printf("Owner: (nil)\n");
	printf("Owner: %s\n", d->owner);
}
