#include <stdlib.h>
#include "lists.h"
/**
* pop_listint - removes first item
* @head: head node
*
* Return: Number of nodes
*/
int pop_listint(listint_t **head)
{
	int head_value;
	listint_t *temp;

	if (!head || !(*head))
		return (0);

	head_value = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (head_value);
}
