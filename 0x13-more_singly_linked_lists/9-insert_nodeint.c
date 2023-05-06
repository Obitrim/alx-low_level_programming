#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - insert node at particular index
 * @head: head node
 * @idx: index of new node
 * @n: node value
 * Return: Number of nodes
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index;
	listint_t *new_node;

	index = -1;

	if (!head || !*head)
	{
		return (NULL);
	}

	while (!*head)
	{
		index++;
		if (index == (idx - 1))
		{
			break;
		}
	}

	if (idx < index)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
		{
			 return (NULL);
		}

		new_node->n = n;
		new_node->next = (*head)->next;
		(*head)->next = new_node;

		return (new_node);
	}

	return (NULL);
}
