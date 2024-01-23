#include "dog.h"
#include <stdlib.h>

/**
 * new_dog- Entry point
 * Description: 'the program's description'
 * @name: First operand
 * @age: Second operand
 * @owner: Third operand
 *
 * Return: An int
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}