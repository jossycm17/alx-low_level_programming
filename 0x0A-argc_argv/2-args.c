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
	int count = 0;

	if (argc > 0)
	{
	while (count < argc)
	{
	printf("%s\n", argv[count]);
	count++;
	}
	}
	return (0);

}
