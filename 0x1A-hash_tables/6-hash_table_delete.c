#include "hash_tables.h"

/**
 * hash_table_delete - Entry Point
 *
 * Description: This function deletes a hash table
 *
 * @ht: pointer to hash table
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	free_ht(ht);
}

