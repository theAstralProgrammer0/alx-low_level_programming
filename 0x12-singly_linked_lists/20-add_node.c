#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

list_t *add_node_recursive(list_t **head, list_t *current, const char *str)
{
    if (current == NULL)
    {
        list_t *newnode = (list_t *)malloc(sizeof(list_t));

        if (newnode == NULL)
        {
            free(newnode);
            return NULL;
        }

        newnode->next = NULL;
        newnode->str = strdup(str);
        newnode->len = strlen(str);

        if (*head == NULL)
        {
            *head = newnode;
        }
        else
        {
            (*head)->next = newnode;
        }

        return newnode;
    }

    return add_node_recursive(head, current->next, str);
}

list_t *add_node(list_t **head, const char *str)
{
    return add_node_recursive(head, *head, str);
}
