#include "hash_tables.h"

void print_ht_list(hash_node_t *h_item)
{
	hash_node_t *temp;

	temp = h_item;
	while (temp)
	{
		if (temp->next != NULL)
		{
			printf("{%s : %s ll}\n",
				temp->key, temp->value);
		}
		else
		{
			printf("{%s : %s ll}\n",
				temp->key, temp->value);
		}
		temp = temp->next;
	}
}



void print_ht(hash_table_t *h_table)
{
	int count = 0;
	unsigned long int i;
	hash_node_t **h_items = NULL;

	h_items = h_table->array;

	for (i = 0; i < h_table->size; i++)
	{
		/*when current item is null, skip it*/
		if (!h_items[i])
			continue;
		printf("h_items[%lu]->next = %p\n", i, (void *)h_items[i]->next);
		/*handle index is singly linked list of lenght 1*/
		if (h_items[i]->next == NULL)
		{
			if (count != 0)
			{
				printf("{%s : %s}\n",
					h_items[i]->key, h_items[i]->value);
			}
			else
			{
				printf("{%s : %s}\n",
					h_items[i]->key, h_items[i]->value);
				++count;
			}
		}
		else
		{
			print_ht_list(h_items[i]);
		}
	}
}
