#include <stdio.h>
#include "lists.h"
/**
* sum_listint - sum node data
* @head: head node
*
* Return: Number of nodes
*/
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *temp;

	if (!head)
		return (0);

	sum = 0;
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
