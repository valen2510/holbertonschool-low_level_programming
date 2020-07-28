#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at given index
 * @head: pointer to head
 * @index: index given
 * Return: 1 (Success) -1 (Failed)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux1_head, *aux2_head;
	unsigned int i;

	if (!index)
	{
		if (*head)
		{
			aux1_head = *head;
			*head = (*head)->next;
			free(aux1_head);
			return (1);
		}
	}
	else
	{
		aux1_head = *head;
		aux2_head = *head;

		for (i = 0; i < index - 1; i++)
		{
			if (i < index - 1 && !aux1_head)
				return (-1);

			aux1_head = aux1_head->next;
			aux2_head = aux2_head->next;
		}

		aux2_head = aux2_head->next;

		if (aux2_head)
		{
			aux1_head->next = aux2_head->next;
			free(aux2_head);
			return (1);
		}
	}
	return (-1);
}
