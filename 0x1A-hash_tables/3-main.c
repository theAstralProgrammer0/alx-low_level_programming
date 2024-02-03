#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "hetairas", "hetairas value");
    hash_table_set(ht, "mentioner", "mentioner value");
    hash_table_set(ht, "heliotropes", "heliotropes value");
    hash_table_set(ht, "neurospora", "neurospora value");
    hash_table_set(ht, "depravement", "depravement value");
    hash_table_set(ht, "serafins", "serafins value");
    hash_table_set(ht, "stylist", "stylist value");
    hash_table_set(ht, "subgenera", "subgenera value");
    hash_table_set(ht, "joyful", "joyful value");
    hash_table_set(ht, "synaphea", "synaphea value");
    hash_table_set(ht, "redescribed", "redescribed value");
    hash_table_set(ht, "urites", "urites value");
    hash_table_set(ht, "dram", "dram value");
    hash_table_set(ht, "vivency", "vivency value");

    print_ht(ht);
    return (EXIT_SUCCESS);
}
