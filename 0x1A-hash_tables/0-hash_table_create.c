#include "hash_tables.h"

/**
 * hash_table_create - Entry Point
 * 
 * Description: This function initializes a hash table
 *
 * @size: Size of the hash table
 *
 * Return: (hash_table_t *) A pointer to the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *h_table = NULL;
	hash_node_t **h_items = NULL;

	h_table = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (h_table == NULL)
		return (NULL);

	h_table->size = size;

	h_items = (hash_node_t **) calloc(h_table->size, sizeof(hash_node_t *));
	if (h_items == NULL)
	{
		free(h_table);
		h_table = NULL;
		return (NULL);
	}

	for (i = 0; i < h_table->size; ++i)
		h_items[i] = NULL;

	h_table->array = h_items;
	return (h_table);
}

