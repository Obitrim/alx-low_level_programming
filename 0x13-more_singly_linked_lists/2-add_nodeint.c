#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* add_nodeint - add node to beginning of list
* @head: head node
* @n: value in new node
* Return: address of new element
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = (listint_t *) malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
