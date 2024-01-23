#include "dog.h"
#include <stdlib.h>

/**
 * init_dog- Entry point
 * Description: 'the program's description'
 * @d: First operand
 * @name: Second operand
 * @age: Third operand
 * @owner: Fourth operand
 *
 * Return: An int
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
