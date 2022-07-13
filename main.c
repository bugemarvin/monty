#include "monty.h"

/**
  * main - entry to check execution for stacks.
  * @argc: As the argumental count.
  * @argv: As the argumental vector/value.
  *
  * Return: Always 0 on succes.
  */

int main(int argc, char **argv)
{
	_createstack();
	if (argc > 2 || argc < 2)
	{
		exit(EXIT_FAILURE);
	}
	else if ((*argv) != NULL)
	{
		printf("initialized stack");
	}
	return (0);
}
