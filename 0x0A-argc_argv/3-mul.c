#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - print number of the argument
 * @argc: count argument
 * @argv: arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a, b;
	if (argc == 1)
	{
		a = atio(argv[1]);
		b = atio(argv[2]);
		printf("%d\n", a *b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
