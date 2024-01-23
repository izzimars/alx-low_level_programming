#include "dog.h"
#include <stdlib.h>

/**
 * free_dog- Entry point
 * Description: 'the program's description'
 * @d: First operand
 *
 * Return: An int
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
