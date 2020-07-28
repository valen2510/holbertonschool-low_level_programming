#include "lists.h"
/**
 * pop_listint - delete the first node of a listit_t list
 * @head: pointer to head pointer
 * Return: deleted first node data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *aux_head;
	int n;

	aux_head = *head;
	n = 0;

	if (*head)
	{
		*head = (*head)->next;
		n = aux_head->n;
		free(aux_head);
	}

	return (n);
}
