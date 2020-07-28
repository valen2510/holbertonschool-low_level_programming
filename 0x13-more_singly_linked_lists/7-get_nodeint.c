#include "lists.h"
/**
 * get_nodeint_at_index - find nth node of a listint_t list
 * @head: head pointer
 * @index: index of the node
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *aux_head;
	unsigned int i;

	aux_head = head;

	for (i = 0; i < index; i++)
	{
		if (!aux_head)
			return (NULL);

		aux_head = aux_head->next;
	}

	return (aux_head);
}
