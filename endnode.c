#include "monty.h"

/**
 * _addend - adds a new node at the end of a dlistint_t list
 * @head: head of the list
 * @n: value of the element
 *
 * Return: the address of the new element
 */

stack_t *_addend(stack_t **head, const int n)
{
	stack_t *h;
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	h = (*head);

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new_node;
	}
	else
	{
		(*head) = new_node;
	}

	new_node->prev = h;

	return (new_node);
}
