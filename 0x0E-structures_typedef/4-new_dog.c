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
	int j, k, l;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (j = 0; name[j]; j++)
		;
	for (k = 0; owner[k]; k++)
		;
	p->name = malloc(sizeof(char) + j + 1);
	p->owner = malloc(sizeof(char) + k + 1);
	if (!(p->name) || !(p->owner))
	{
		free(p->owner);
		free(p->name);
		free(p);
		return (NULL);
	}
	for (j = 0; l < j; l++)
		p->name[l] = name[l];
	p->name[l] = '\0';
	for (l = 0; l < k; l++)
		p->name[l] = name[l];
	p->name[l] = '\0';
	p->age = age;
	return (p);
}
