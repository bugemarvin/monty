#include "monty.h"

/**
 * _addnode - function to add node at [0] index of list.
 * @head: pointer to the [0] index of the list.
 * @node: constant integer holding new node.
 *
 * Return: Always a new node if not NULL.
 *		NULL if the function fails.
 */

stack_t *_addnode(stack_t **head, const int node)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = node;
	new_node->prev = NULL;
	new_node->next = (*head);
	if ((*head) != NULL)
	{
		(*head)->prev = new_node;
	}
	(*head) = new_node;
	return (new_node);
}
