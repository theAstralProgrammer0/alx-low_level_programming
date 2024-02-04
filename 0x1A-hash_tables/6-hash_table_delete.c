#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
	free_ht(ht);
}

