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
	u_int64_t num;
	u_int64_t i;

	num = atoi(content);
	(void)file;
	(void)counter;

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("%ld=%ld*%ld\n",num,num/i,i);
			break;
		}
	}
}
