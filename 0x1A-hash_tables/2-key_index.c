#include "hash_tables.h"

/**
 * key_index - Entry Point
 *
 * Description: This function generates an index from the djb2 hash function
 * that determines the location of an item on the hash table array
 *
 * @key: key member of the item
 *
 * @size: size of the hash table
 *
 * Return: (unsigned long int) index on success
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, hash;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
