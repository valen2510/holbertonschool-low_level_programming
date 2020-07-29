#include "lists.h"
/**
 * reverse_listint - reverse a listint_t list
 * @head: pointer to head pointer
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tail, *aux_head;

	if (!head)
		return (NULL);

	aux_head = NULL;

	while (*head)
	{
		tail = (*head)->next;
		(*head)->next = aux_head;
		aux_head = *head;
		*head = tail;
	}

	*head = aux_head;

	return (*head);
}
