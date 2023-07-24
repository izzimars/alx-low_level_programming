#include "dog.h"
#include <stdlib.h>

/**
 * free_dog- Entry point
 * Description: 'the program's description'
 * @d: First operand
 *
 * Return: Always 0 (Success)
 */
void free_dog(dog_t *d)
{
	free(d);
}
