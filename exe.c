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
	unsigned long num = atoi(content), i = 0;

	(void)file;
	(void)counter;

	for(i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("%ld=%ld*%d\n", num, num, 1);
			break;
		}
	}
}