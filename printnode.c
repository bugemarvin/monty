#include "monty.h"

/**
 * _printlist - function to print a list.
 * @node: pointer to a node to be printed.
 *
 * Return: Always a std out-put of a node
 *		if not enpty.
 */

size_t _printlist(const stack_t *node)
{
	size_t a;
		for (a = 0; node != NULL; a++)
		{
			printf("%d\n", node->n);
			node = node->next;
		}
	return (a);
}
