#include "monty.h"


void instruction_error(char *instrucion, int line)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", line, instrucion);
	exit(EXIT_FAILURE);
}
