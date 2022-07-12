#include "monty.h"

/**
 * _lennode - function to print length of the node.
 * @node: pointer to show in std out-put length of a node.
 *
 * Return: Always a length of a node.
 *		if node is not NULL.
 */

size_t _lennode(const stack_t *node)
{
	size_t a;
		for (a = 0; node != NULL; a++)
		{
			node = node->next;
		}
	return (a);
}
