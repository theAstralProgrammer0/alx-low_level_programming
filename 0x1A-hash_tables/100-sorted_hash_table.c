#include "hash_tables.h"

/**
 * shash_table_create - Entry Point
 *
 * Description: This function initializes a sorted hash table
 *
 * @size: Size of the hash table
 *
 * Return: (shash_table_t *) A pointer to the sorted hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *sh_table = NULL;
	shash_node_t **sh_items = NULL;

	sh_table = (shash_table_t *) malloc(sizeof(shash_table_t));
	if (sh_table == NULL)
		return (NULL);

	sh_table->size = size;

	sh_items = (shash_node_t **) calloc(sh_table->size, sizeof(shash_node_t *));
	if (sh_items == NULL)
	{
		free(sh_table);
		sh_table = NULL;
		return (NULL);
	}

	for (i = 0; i < sh_table->size; ++i)
		sh_items[i] = NULL;

	sh_table->array = sh_items;
	sh_table->shead = NULL;
	sh_table->stail = NULL;

	return (sh_table);
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
void free_sht(shash_table_t *sh_table)
{
        unsigned long int i;
        shash_node_t **sh_items = NULL;
        shash_node_t *current = NULL, *nextnode = NULL;

        if (sh_table == NULL)
                return;
        sh_items = sh_table->array;
        for (i = 0; i < sh_table->size; i++)
        {
                if (!sh_items[i])
                        continue;
                /*single item in index*/
                if (sh_items[i]->next == NULL)
                {
                        if (sh_items[i])
                        {
                                free_shi(sh_items[i]);
                                sh_items[i] = NULL;
                        }
                }
                /*linked list in index*/
                else
                {
                        current = sh_items[i];
                        while (current)
                        {
                                nextnode = current->next;
                                free_shi(current);
                                current = NULL;
                                current = nextnode;
                        }
                }
        }
        free(sh_items);
        sh_items = NULL;
        free(sh_table);
        sh_table = NULL;
}


/**
 * create_item - Aux Function
 *
 * Description: This function creates a new hash table item (or node)
 *
 * @key: key member of the item
 *
 * @value: value member of the item
 *
 * Return: (shash_node_t *) a pinter to the item node on Success, NULL otherwise
 */
shash_node_t *create_item_sh(const char *key, const char *value)
{
	shash_node_t *sh_item = NULL;

	sh_item = (shash_node_t *) malloc(sizeof(shash_node_t));
	if (sh_item == NULL)
		return (NULL);

	sh_item->key = strdup(key);
	sh_item->value = strdup(value);
	sh_item->next = NULL;
	sh_item->sprev = NULL;
	sh_item->snext = NULL;

        return (sh_item);
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
void free_shi(shash_node_t *sh_item)
{
        if (sh_item == NULL)
                return;

        if (sh_item->key)
        {
                free(sh_item->key);
                sh_item->key = NULL;
        }
        if (sh_item->value)
        {
                free(sh_item->value);
                sh_item->value = NULL;
        }
        free(sh_item);
        sh_item = NULL;
}


/**
 * shash_table_set - Entry Point
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
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *sh_item = NULL, **sh_items = NULL;
	unsigned long int index;

	if (ht == NULL || strlen(key) == 0)
		return (0);

	sh_item = create_item_sh(key, value);
	if (sh_item == NULL)
	{
		free_sht(ht);
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	sh_items = ht->array;

	/*check if the index location is free*/
	if (sh_items[index] == NULL)
		sh_items[index] = sh_item;
	else
	{
		/*compare key values and replace if same*/
		if (strcmp(sh_items[index]->key, key) == 0)
		{
			free_shi(sh_items[index]);
			sh_items[index] = sh_item;
		}
		/*otherwise handle collision*/
		else
			handle_cllsn(ht, sh_item, index);
	}

	/* insert new item in a sorted manner to hash table dll */
	return (sorted_insert_to_sh(ht, sh_item));
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
int handle_cllsn(shash_table_t *ht, shash_node_t *hi, unsigned long int id)
{
	hi->next = ht->array[id];
	ht->array[id] = hi;
	return (1);
}



int sorted_insert_to_sh(shash_table_t *ht, shash_node_t *sh_item)
{
	shash_node_t *temp = NULL;

	/* check for NULL table, free item and return 0 */
	if (ht == NULL)
	{
		free_shi(sh_item);
		return (0);
	}

	/* check for NULL hash table, free table and return 0 */
	if (sh_item == NULL)
	{
		free_sht(ht);
		return (0);
	}

	/* check if dll is empty */
	if (ht->shead == NULL)
	{
		ht->shead = sh_item;
		ht->stail = sh_item;
		return (1);
	}
	/* sort insert otherwise */
	else
	{
		temp = ht->shead;
		
		/* compare current key with dll key */
		while (temp->snext)
		{
			if (strcmp(sh_item->key, temp->key) > 0)
				temp = temp->snext;
			if (temp == ht->shead && strcmp(sh_item->key, temp->key) < 0)
			{
				sh_item->snext = temp;
				temp->sprev = sh_item;
				ht->shead = sh_item;
				shash_table_print(ht);
				return (1);
			}
			else if (strcmp(sh_item->key, temp->key) < 0)
			{
				sh_item->sprev = temp->sprev;
				sh_item->snext = temp;
				temp->sprev->snext = sh_item;
				temp->sprev = sh_item;
				return (1);
			}
		}
		sh_item->sprev = temp;
		temp->snext = sh_item;
		ht->stail = sh_item;
		return (1);
	}
}

/**
  * print_dlistint - Entry Point
  *
  * Description: This function prints the contents of the node in a doubly
  * linked list
  *
  * @h: head pointer to head node
  *
  * Return: (count) int
  */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp = NULL;
	int count = 0;

	if (ht == NULL)
		return;

	temp = ht->stail;
	printf("{");
	while (temp != NULL)
	{
		if (count == 0)
		{
			printf("'%s': '%s'",
				temp->key, temp->value);
			++count;
		}
		else
		{
			printf(", '%s': '%s'",
				temp->key, temp->value);
			++count;
		}
		temp = temp->sprev;
	}
	printf("}\n");
}


/**
  * print_dlistint - Entry Point
  *
  * Description: This function prints the contents of the node in a doubly
  * linked list
  *
  * @h: head pointer to head node
  *
  * Return: (count) int
  */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp = NULL;
	int count = 0;

	if (ht == NULL)
		return;

	temp = ht->shead;
	printf("{");
	while (temp != NULL)
	{
		if (count == 0)
		{
			printf("'%s': '%s'",
				temp->key, temp->value);
			++count;
		}
		else
		{
			printf(", '%s': '%s'",
				temp->key, temp->value);
			++count;
		}
		temp = temp->snext;
	}
	printf("}\n");
}

/**
 * hash_table_delete - Entry Point
 *
 * Description: This function deletes a hash table
 *
 * @ht: pointer to hash table
 *
 * Return: Nothing
 */
void shash_table_delete(shash_table_t *ht)
{
        free_sht(ht);
}

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

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t **sh_items = NULL, *temp = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index > ht->size)
		return (NULL);

	sh_items = ht->array;

	if (sh_items[index] == NULL)
		return (NULL);

	/*single element at index*/
	if (sh_items[index]->next == NULL)
		return (sh_items[index]->value);
	/*linked list at index*/
	else
	{
		temp = sh_items[index];
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
				return (temp->value);
			temp = temp->next;
		}
		return (NULL);
	}
	return (NULL);
}
