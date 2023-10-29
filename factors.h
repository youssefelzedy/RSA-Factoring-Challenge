#ifndef FACTORS_H
#define FACTORS_H

#define  _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/*Main Fnction*/
int main(int argc, char *argv[]);
void exe(char *content, unsigned int counter, FILE *file);

#endif