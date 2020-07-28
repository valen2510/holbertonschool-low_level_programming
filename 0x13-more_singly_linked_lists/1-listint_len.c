#include "lists.h"
/**
 * listint_len - find number of elements in a listint_t list
 * @h: pointer to head
 * Return: number of elements in a list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *aux_head;
	size_t n_elements;

	aux_head = h;
	n_elements = 0;

	while (aux_head)
	{
		n_elements++;
		aux_head = (*aux_head).next;
	}
	return (n_elements);
}
