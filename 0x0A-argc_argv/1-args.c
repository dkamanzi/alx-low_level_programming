#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of args
 * @argc: argument count
 * @argv: argument vector
 *
 *Return: Alwats zero
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
