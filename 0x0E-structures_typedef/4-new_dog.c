#include "dog.h"
#include <stddef.h>

/**
 * new_dog- Entry point
 * Description: 'the program's description'
 * @d: First operand
 * @name: Second operand
 * @age: Third operand
 * @owner: Fourth operand
 *
 * Return: Always 0 (Success)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	dog_t d;

	p = &d;
	(*p).name = name;
	(*p).age = age;
	(*p).owner = owner;
	if (p  == NULL)
		return (NULL);
	return (p);
}
