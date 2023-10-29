#include "factors.h"


/**
* main - monty code interpreter
* @argc: number of arguments
* @argv: monty file location
* Return: 0 on success
*/

int main(int argc, char *argv[])
{
	char *content;
	FILE *file;
	size_t size = 0;
	ssize_t cntr_line = 1;
	unsigned int counter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (cntr_line > 0)
	{
		content = NULL;
		cntr_line = getline(&content, &size, file);
		counter++;
		if (cntr_line > 0)
		{
			exe(content, counter, file);
		}
		free(content);
	}
	fclose(file);
return (0);
}
