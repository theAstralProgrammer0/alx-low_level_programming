#include <stdio.h>
#include "lists.h"

size_t list_len(const list_t *h)
{
	size_t count = 0;

	list_t *temp = (list_t *) h;

	while (h != NULL)
	{
		if (temp != NULL)
		{
			temp = temp->next;
			count++;
		}
		else
			break;
	}
	return (count);
}
