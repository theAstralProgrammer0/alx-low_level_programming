#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		list_t *temp = (list_t *)h;
		if (h->str == NULL)
		{
			temp->len = 0;
			temp->str = "(nil)";
		}
			
		printf("[%d] %s\n", temp->len, temp->str);
		h = h->next;
		count++;
	}
	return (count);
}
