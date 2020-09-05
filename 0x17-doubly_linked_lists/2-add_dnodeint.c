#include "lists.h"
/**
* add_dnodeint - add a node at the beggining of the dlistint_t list
* @head: head of the list
* @n: integer value of the new_node
* Return: new_node (Success) NULL (Fail)
**/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (!(*head))
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		new_node->next = *head;
		new_node->prev = (*head)->prev;
		(*head)->prev = new_node;
		*head = new_node;
	}
	return (new_node);
}
