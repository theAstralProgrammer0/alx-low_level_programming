#include "hash_tables.h"

/**
 * hash_table_get - Entry Point
 *
 * Description: This is a function that uses a key to retrieve the
 * corresponding value in the hash table
 *
 * @ht: hash table to be probed
 *
 * @key: key to retrieve value
 *
 * Return: (char *) value string
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t **h_items = NULL, *temp = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	h_items = ht->array;

	if (h_items[index] == NULL)
		return (NULL);

	/*single element at index*/
	if (h_items[index]->next == NULL)
		return (h_items[index]->value);
	/*linked list at index*/
	else
	{
		temp = h_items[index];
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
				return (temp->value);
			temp = temp->next;
		}
		return (NULL);
	}
}
