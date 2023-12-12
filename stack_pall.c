#include "monty.h"

/**
* pall_op - pall operation
* @top: A double Pointer To The Top Element in the stack
* @data: int data to be print
*/

#include "monty.h"

void pall_op(stack_t **top, int data)
{
	if (!check_empty(top))
	{
		while (*top)
		{
			data = (*top)->n;
			printf("%d\n", data);
			*top = (*top)->next;
		}
	}
}

/**
 * check_empty - checks if the stack is empty
 * @top: Pointer to the top
 * Return: in Success, Not top
*/

int check_empty(stack_t **top)
{
	return (!(*top));
}
