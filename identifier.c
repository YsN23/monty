#include "monty.h"


void selecter(char **buff, char *specifier)
{
	int i = 0, j = 0;

	instruction_t arr_func[] = {
		{"push", push_op},
		{"pall", pall_op},
	};

	while (arr_func[i].opcode)
	{
		if (strcmp(arr_func[i].opcode, specifier) == 0)
		{
			return (arr_func[i].f);
		}

		else
		{
			
		}


	}

}
