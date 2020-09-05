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

	if (index > (dlistint_len(head) - 1))
		return (NULL);

	for (i = 0; i < index; i++)
		head = head->next;

	return (head);
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

