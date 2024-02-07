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
    shash_table_t *ht;
    char *str = NULL;

    ht = shash_table_create(1024);
    shash_table_set(ht, "betty", "cool");
    shash_table_set(ht, "", "hetairas value");

    shash_table_set(ht, "mentioner", "mentioner value");
    shash_table_set(ht, "heliotropes", "heliotropes value");
    shash_table_set(ht, "neurospora", "neurospora value");
    shash_table_set(ht, "depravement", "depravement value");
    shash_table_set(ht, "serafins", "serafins value");
    str = shash_table_get(ht, "parlor");
    printf("The get function got: %s\n", str);
    shash_table_set(ht, "stylist", "stylist value");
    shash_table_set(ht, "subgenera", "subgenera value");
    shash_table_set(ht, "joyful", "joyful value");
    shash_table_set(ht, "synaphea", "synaphea value");
    shash_table_set(ht, "redescribed", "redescribed value");
    shash_table_set(ht, "urites", "urites value");
    shash_table_set(ht, "dram", "dram value");
    shash_table_set(ht, "vivency", "vivency value");
    shash_table_print(ht);

    return (EXIT_SUCCESS);
}
