#include <stdio.h>
#include "lists.h"
/**
* listint_len - prints list length
* @h: head node
*
* Return: Number of nodes
*/
size_t listint_len(const listint_t *h)
{
	size_t node_count;

	node_count = 0;
	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}
