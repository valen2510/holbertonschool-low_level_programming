#include "lists.h"
/**
* add_dnodeint_end - Add a new node at the end of a dlistint_t list
* @head: head of the list
* @n: integer value of the node
* Return: new_node (Success) NULL (Fail)
**/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *tail = *head;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (!(*head))
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
		tail = new_node;
	}
	else
	{
		while (tail->next)
			tail = tail->next;

		new_node->next = tail->next;
		tail->next = new_node;
		new_node->prev = tail;
		tail = new_node;
	}
	return (new_node);
}
