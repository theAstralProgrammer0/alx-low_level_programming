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

    shash_table_set(ht, "mentioner2", "mentioner value");
    shash_table_set(ht, "heliotropes2", "heliotropes value");
    shash_table_set(ht, "neurospora2", "neurospora value");
    shash_table_set(ht, "depravement2", "depravement value");
    shash_table_set(ht, "serafins2", "serafins value");
    str = shash_table_get(ht, "depravement2");
    printf("The get function got: %s\n", str);
    shash_table_set(ht, "stylist2", "stylist value");
    shash_table_set(ht, "subgenera2", "subgenera value");
    shash_table_set(ht, "joyful2", "joyful value");
    shash_table_set(ht, "synaphea2", "synaphea value");
    shash_table_set(ht, "redescribed2", "redescribed value");
    shash_table_set(ht, "urites2", "urites value");
    shash_table_set(ht, "dram2", "dram value");
    shash_table_set(ht, "vivency2", "vivency value");

    shash_table_set(ht, "mentioner3", "mentioner value");
    shash_table_set(ht, "heliotropes3", "heliotropes value");
    shash_table_set(ht, "neurospora3", "neurospora value");
    shash_table_set(ht, "depravement3", "depravement value");
    shash_table_set(ht, "serafins3", "serafins value");
    str = shash_table_get(ht, "subgenera");
    printf("The get function got: %s\n", str);
    shash_table_set(ht, "stylist3", "stylist value");
    shash_table_set(ht, "subgenera3", "subgenera value");
    shash_table_set(ht, "joyful3", "joyful value");
    shash_table_set(ht, "synaphea3", "synaphea value");
    shash_table_set(ht, "redescribed3", "redescribed value");
    shash_table_set(ht, "urites3", "urites value");
    shash_table_set(ht, "dram3", "dram value");
    shash_table_set(ht, "vivency3", "vivency value");

    shash_table_set(ht, "mentioner4", "mentioner value");
    shash_table_set(ht, "heliotropes4", "heliotropes value");
    shash_table_set(ht, "neurospora4", "neurospora value");
    shash_table_set(ht, "depravement4", "depravement value");
    shash_table_set(ht, "serafins4", "serafins value");
    str = shash_table_get(ht, "redescribed4");
    printf("The get function got: %s\n", str);
    shash_table_set(ht, "stylist4", "stylist value");
    shash_table_set(ht, "subgenera4", "subgenera value");
    shash_table_set(ht, "joyful4", "joyful value");
    shash_table_set(ht, "synaphea4", "synaphea value");
    shash_table_set(ht, "redescribed4", "redescribed value");
    shash_table_set(ht, "urites4", "urites value");
    shash_table_set(ht, "dram4", "dram value");
    shash_table_set(ht, "vivency4", "vivency value");
    shash_table_print(ht);
    return (EXIT_SUCCESS);
}
