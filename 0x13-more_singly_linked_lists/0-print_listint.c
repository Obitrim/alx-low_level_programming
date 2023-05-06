#include <stdio.h>
#include "lists.h"
/**
* print_listint - prints all elements list
* @h: head node
*
* Return: Number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t node_count;

	node_count = 0;
	if (!h)
		return (node_count);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}

	return (node_count);
}
