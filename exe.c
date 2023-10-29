#include "factors.h"

/**
 * exe - monty code interpreter
 * @content: content of the file
 * @counter: line number
 * @file: file
 * Return: nothing
 */

void exe(char *content, unsigned int counter, FILE *file)
{
	unsigned long i = 0;

	(void)file;
	(void)counter;

	while (content[i] != '\n')
	{
		i++;
	}
	content[i] = '\0';
	printf("%s=%s*%d\n", content, content, 1);
}
