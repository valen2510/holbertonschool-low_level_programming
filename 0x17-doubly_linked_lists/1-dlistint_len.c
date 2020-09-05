#include "lists.h"
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
