#include "monty.h"


/**
 * push_op - push operation (pushing element in the top of stack)
 * @top: doule Pointer to the head
 * @data: int data
 * Return: New Element, or NULL
*/

stack_t *push_op(stack_t **top, int data)
{
	stack_t *new_elem = malloc(sizeof(stack_t));

	if (new_elem == NULL)
	{
		return (NULL);
	}

	new_elem->n = data;
	new_elem->prev = NULL;

	(*top)->prev = new_elem;

	*top = new_elem;

	return (new_elem);

}
