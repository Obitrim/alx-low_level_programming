#include <stdlib.h>
#include "lists.h"
/**
* insert_nodeint_at_index - insert nth node
* @head: head node
* @idx: insertion index
* Return: address of new node or NULL if it fails
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int traversed_index;
	listint_t *new;

	if (!head)
		return (NULL);

	traversed_index = 0;
	while (*head && traversed_index < idx)
	{
		traversed_index++;
		*head = (*head)->next;
	}

	if (traversed_index < idx)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new = (*head)->next;
	(*head)->next = new;

	return (new);
}
