#include "main.h"
#include <stdio.h>

/**
 * main - print number of the argument
 * @argc: count argument
 * @argv: arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
