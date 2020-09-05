#include "lists.h"
/**
 * add_nodeint_end - add node at the end of the listint_t list
 * @head: pointer to pointer head
 * @n: integer
 * Return: New_Node address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *New_Node;
	listint_t **aux_head;

	New_Node = (listint_t *)malloc(sizeof(listint_t));

	if (!New_Node)
		return (NULL);

	aux_head = head;

	while (*aux_head)
		aux_head = &(*aux_head)->next;

	New_Node->n = n;
	New_Node->next = *aux_head;
	*aux_head = New_Node;

	return (New_Node);
}
