#include "monty.h"

int read_file(FILE *fd);

char *buffer = NULL;
/**
 * read_file - Reads the content of a file
 * @fd: file descriptor
 * Return: exit statuts
 */

int read_file(FILE *fd)
{
	int l_num = 1, type = 0, exit_stat = EXIT_SUCCESS;
	size_t n = 0;
	char *opcode, *value;
	const char *seperator = "\n ";

	while (getline(&buffer, &n, fd) != EOF)
	{
		if (buffer == NULL)
			return (malloc_err());

		opcode = strtok(buffer, seperator);

		if (opcode == NULL)
		{
			l_num++;
			continue;
		}

		value = strtok(NULL, seperator);

		if (strcmp(opcode, "queue") == 0)
			type = 1;
		else if (strcmp(opcode, "stack") == 0)
			type = 0;

		exit_stat = func(opcode, value, l_num, type);
		l_num++;
	}
	free(buffer);
	return (exit_stat);
}
