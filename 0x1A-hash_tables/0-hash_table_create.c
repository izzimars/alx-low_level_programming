#include "hash_tables.h"
#include <stddef.h>

/**
 * hash_table_t- Entry point
 * Description: 'the program's description'
 * @name: First operand
 * @f : Second operand
 *
 * Return: A pointer of type char
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	table->size = size;
	table->array = malloc(size * sizeof(hash_node_t *));
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;
	return table;
}
