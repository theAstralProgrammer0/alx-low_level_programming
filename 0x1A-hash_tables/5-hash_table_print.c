#include "hash_tables.h"

/**
 * print_ht_list - Aux function
 *
 * Description: This function prints the linked list at an index
 *
 * @h_item: pointer to item at specific index (start of the list)
 *
 * Return: Nothing
 */
void hash_table_ll_print(hash_node_t *h_item)
{
	hash_node_t *temp;

	temp = h_item;
	while (temp)
	{
		/*
		*if (count == 0)
		*{
		*	printf("'%s': '%s'",
		*		temp->key, temp->value);
		*	++count;
		*}
		*else
		*{*/
		printf(", '%s': '%s'", temp->key, temp->value);
		/*++count;*/
		temp = temp->next;
	}
}


/**
 * print_ht - Entry Point
 *
 * Description: This function prints the contents of a hash table
 *
 * @h_table: pointer to the hash table
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	int count = 0;
	unsigned long int i;
	hash_node_t **h_items = NULL;

	h_items = ht->array;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		/*when current item is null, skip it*/
		if (!h_items[i])
			continue;
		/*handle index is singly linked list of lenght 1*/
		if (h_items[i]->next == NULL)
		{
			if (count == 0)
			{
				printf("'%s[%lu]': '%s'",
					h_items[i]->key, i, h_items[i]->value);
				++count;
			}
			else
			{
				printf(", '%s[%lu]': '%s'",
					h_items[i]->key, i, h_items[i]->value);
				++count;
			}
		}
		else
		{
			hash_table_ll_print(h_items[i]);
		}
	}
	printf("}\n");
}
