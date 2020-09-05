#include "lists.h"
/**
* insert_dnodeint_at_index - insert new node at a given poisition in a dlist
* @h: head of the list
* @idx: given position to insert new node
* @n: integer of the new node
* Return: new_node (Success) NULL (Fail)
**/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current_node = *h;
	dlistint_t *new_node = NULL;
	unsigned int i;

	if (idx > dlistint_len(current_node))
		return (NULL);

	if (idx == 0 || *h == NULL)
		return (add_dnodeint(h, n));

	if (idx == dlistint_len(*h))
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	for (i = 0; i < idx - 1; i++)
		current_node = current_node->next;

	current_node->next->prev = new_node;
	new_node->next = current_node->next;
	current_node->next = new_node;
	new_node->prev = current_node;
	return (new_node);
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

