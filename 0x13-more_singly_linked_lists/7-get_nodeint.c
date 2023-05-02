#include <stdlib.h>
#include "lists.h"
/**
* get_nodeint_at_index - get nth node
* @head: head node
* @index: index to return;
* Return: Number of nodes
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int traversed_index;

	if (!head)
		return (NULL);

	traversed_index = 0;
	while (head)
	{
		if (traversed_index == index)
		{
			return (head);
		}
		traversed_index++;
		head = head->next;
	}

	return (NULL);
}
