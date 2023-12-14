#include "monty.h"

/**
 * pint_f - prints the value at the top of the stack
 * @new_node: double pointer to the node
 * @l_num: line number of of the opcode.
 */
void pint_f(stack_t **new_node, unsigned int l_num)
{
	if (new_node == NULL || *new_node == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", l_num);
		free(buffer);
		buffer = NULL;
		fclose(f_d);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*new_node)->n);
}
