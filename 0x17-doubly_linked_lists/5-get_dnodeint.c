#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	temp = head;
	for (i = 0; i <= index; i++)
	{
		if (temp->next == NULL)
			return (NULL);
		
		if (i != index)
			temp = temp->next;
		else
			return (temp);
	}
	return (NULL);
}
