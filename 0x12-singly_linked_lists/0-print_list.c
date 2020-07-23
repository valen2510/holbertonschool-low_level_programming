#include "lists.h"
/**
 * print_list - print the elements of the list_t list.
 * @h: the start of the list (head).
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	int n_nodes;

	n_nodes = 0;

	while (h)
	{

		if (!h->str || !h->len)
		{
			printf("[0] (nil)\n");
			h = h->next;
			n_nodes++;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
			n_nodes++;
		}
	}
	return (n_nodes);
}

