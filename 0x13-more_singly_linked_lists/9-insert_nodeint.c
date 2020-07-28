#include "lists.h"
/**
 * insert_nodeint_at_index - insert new node at given index
 * @head: pointer to head
 * @idx: index where new_node will be added
 * @n: integer
 * Return: added new_node address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux_head, *new_node;
	unsigned int i;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	if (!idx)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		aux_head = *head;

		for (i = 0; i < idx - 1; i++)
		{
			if (i < idx - 1 && !aux_head)
				return (NULL);

			aux_head = aux_head->next;
		}

		new_node->n = n;
		new_node->next = aux_head->next;
		aux_head->next = new_node;
	}

	return (new_node);
}
