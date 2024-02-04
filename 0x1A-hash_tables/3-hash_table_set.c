#include "hash_tables.h"

/**
 * create_item - Aux Function
 *
 * Description: This function creates a new hash table item (or node)
 *
 * @key: key member of the item
 *
 * @value: value member of the item
 *
 * Return: (hash_node_t *) a pinter to the item node on Success, NULL otherwise
 */
hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *h_item = NULL;

	h_item = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (h_item == NULL)
		return (NULL);

	h_item->key = strdup(key);
	h_item->value = strdup(value);
	h_item->next = NULL;

	return (h_item);
}


/**
 * free_hi - Aux function
 *
 * Description: This function frees a hash table item
 *
 * @h_item: hash table item
 *
 * Return: Nothing
 */
void free_hi(hash_node_t *h_item)
{
	if (h_item == NULL)
		return;

	if (h_item->key)
	{
		free(h_item->key);
		h_item->key = NULL;
	}
	if (h_item->value)
	{
		free(h_item->value);
		h_item->value = NULL;
	}
	free(h_item);
	h_item = NULL;
}


/**
 * free_ht - Aux function
 *
 * Description: This is a function that frees the hash table safely
 *
 * @h_table: pointer to the hash table
 *
 * Return: Nothing
 */
void free_ht(hash_table_t *h_table)
{
	unsigned long int i;
	hash_node_t **h_items = NULL;
	hash_node_t *current = NULL, *nextnode = NULL;

	if (h_table == NULL)
		return;
	h_items = h_table->array;
	for (i = 0; i < h_table->size; i++)
	{
		if (!h_items[i])
			continue;
		/*single item in index*/
		if (h_items[i]->next == NULL)
		{
			if (h_items[i])
			{
				free_hi(h_items[i]);
				h_items[i] = NULL;
			}
		}
		/*linked list in index*/
		else
		{
			current = h_items[i];
			while (current)
			{
				nextnode = current->next;
				free_hi(current);
				current = NULL;
				current = nextnode;
			}
		}
	}
	free(h_items);
	h_items = NULL;
	free(h_table);
	h_table = NULL;
}


/**
 * handle_collision - Entry Point
 *
 * Description: This is a function that handles collision via separate chaining
 *
 * @ht: pointer to the hash table
 *
 * @hi: pointer to the item to be added to the hash table
 *
 * @id: index where collisoin is to be handled
 *
 * Return: (int) 1 on Success, 0 on Failure
 */
int handle_collision(hash_table_t *ht, hash_node_t *hi, unsigned long int id)
{
	hi->next = ht->array[id];
	ht->array[id] = hi;
	return (1);
}


/**
 * hash_table_set - Entry Point
 *
 * Description: This function adds an item into the hash table
 *
 * @ht: pointer to the hash table
 *
 * @key: key member of the item
 *
 * @value: value member of the item
 *
 * Return: (int) 1 on Success, 0 on Failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *h_item = NULL, **h_items = NULL;
	unsigned long int index;

	if (ht == NULL || strlen(key) == 0)
		return (0);

	h_item = create_item(key, value);
	if (h_item == NULL)
	{
		free_ht(ht);
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	h_items = ht->array;

	/*check if the index location is free*/
	if (h_items[index] == NULL)
	{
		h_items[index] = h_item;
		return (1);
	}
	else
	{
		/*compare key values and replace if same*/
		if (strcmp(h_items[index]->key, key) == 0)
		{
			free_hi(h_items[index]);
			h_items[index] = h_item;
			return (1);
		}
		/*otherwise handle collision*/
		else
			return (handle_collision(ht, h_item, index));
	}
}
