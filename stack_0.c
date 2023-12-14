#include "monty.h"

/**
 * push_f - pushes an element to the stack
 * @new_node: Pointer to the new node.
 * @l_num: line number of of the opcode.
 */
void push_f(stack_t **new_node, unsigned int l_num)
{
	stack_t *tmp;

	(void)l_num;
	if (!(new_node) || !(*new_node))
	{
		free(buffer);
		buffer = NULL;
		fclose(f_d);
		exit(EXIT_FAILURE);
	}
	if (first == NULL)
	{
		first = *new_node;
		return;
	}
	tmp = first;
	first = *new_node;
	first->next = tmp;
	tmp->prev = first;
}
