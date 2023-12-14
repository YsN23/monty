#include "monty.h"


/**
 * func - Finds the function
 * @opcode: The operation code
 * @value: value for the operation
 * @l_num: Line number
 * @type: format specifier
 * Return: exit status
 */


int func(char *opcode, char *value, int l_num, int type)
{
	stack_t *element;
	int signe = 1, flag = 1, i = 0, j = 0;

	instruction_t array_func[] = {
		{"push", push_f},
		{"pall", pall_f},
		{"pint", pint_f},
		{"pop", pop_f},
		{"nop", nop},
		{"swap", swap_f},
		{"add", add_f},
		{"sub", sub_f},
		{"div", div_f},
		{"mul", mul_f},
		{"mod", mod_f},
		{NULL, NULL}};

	if (opcode[0] == '#')
		return (0);

	while (array_func[i].opcode)
	{
		if (strcmp(opcode, array_func[i].opcode) == 0)
		{
			if (strcmp(opcode, "push") == 0)
			{
				if (value != NULL && (*value) == '-')
				{
					signe = -1;
					value++;
				}
				if (value == NULL)
					return (push_int_err(l_num));
				for (; *(value + j) != '\0'; j++)
				{
					if (isdigit(*(value + j) == 0))
						return (push_int_err(l_num));
				}
				element = first_node(signe * atoi(value));
				if (type == 1)
					queue(&element, l_num);
				else if (type == 0)
					array_func[i].f(&element, l_num);
			}
			else
				array_func[i].f(&first, l_num);

			flag = 0;
		}
		i++;
	}
	if (flag == 1)
		return (op_err(opcode, l_num));

	return (EXIT_SUCCESS);
}