#include "monty.h"

/**
 * _freenodes - frees node for a list from a stack
 * @head: head of the list
 *
 * Return: Always NULL.
 */

void _freenodes(stack_t *head)
{
	stack_t *tmp_stack;

	if (head != NULL)
	{
		while (head->prev != NULL)
		{
			head = head->prev;
		}
	}
	while ((tmp_stack = head) != NULL)
	{
		head = head->next;
		free(tmp_stack);
	}
}
