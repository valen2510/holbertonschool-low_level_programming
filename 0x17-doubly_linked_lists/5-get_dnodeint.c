#include "lists.h"
/**
* get_dnodeint_at_index - get the node and the given index
* @head: head of the list
* @index: index of the node
* Return: node (Success) NULL (Fail)
**/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (!head)
			return (NULL);
	}

	return (head);
}
