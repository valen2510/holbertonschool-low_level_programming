#include "lists.h"
/**
* delete_dnodeint_at_index - delete the node at the given index in a a dlist
* @head: head of the list
* @index: index of the node to delete
* Return: 1 (Success) -1 (Fail)
**/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = NULL;
	dlistint_t *delete_node = NULL;
	unsigned int i;

	if (!head)
		return (-1);

	if (index >= dlistint_len(*head))
		return (-1);

	current_node = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(current_node);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
		current_node = current_node->next;

	delete_node = current_node->next;
	if (index == dlistint_len(*head) - 1)
	{
		current_node->next = NULL;
		free(delete_node);
		return (1);
	}

	current_node->next = delete_node->next;
	delete_node->next->prev = current_node;
	free(delete_node);

	return (1);
}
/**
* dlistint_len - number of elements on a dlistint_t list
* @h: head of the list
* Return: elements number
**/
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int elements_number = 0;

	while (h)
	{
		elements_number++;
		h = h->next;
	}
	return (elements_number);
}
