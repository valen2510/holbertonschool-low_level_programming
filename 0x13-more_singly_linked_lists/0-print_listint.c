#include "lists.h"
/**
 * print_listint - print all the elements of a listint list
 * @h: pointer to head
 * Return: (nodes_number) number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *aux_head;
	int nodes_numnber;

	aux_head = h;
	nodes_numnber = 0;

	while (aux_head)
	{
		printf("%d\n", (*aux_head).n);
		aux_head = aux_head->next;
		nodes_numnber++;
	}

	return (nodes_numnber);
}
