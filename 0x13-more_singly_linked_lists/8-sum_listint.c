#include "lists.h"
/**
 * sum_listint - sum of all the data of a list
 * @head: pointer to head
 * Return: sum of the data
 */
int sum_listint(listint_t *head)
{
	listint_t *aux_head;
	int sum;

	aux_head = head;
	sum = 0;

	while (aux_head)
	{
		sum += aux_head->n;
		aux_head = aux_head->next;
	}

	return (sum);
}
