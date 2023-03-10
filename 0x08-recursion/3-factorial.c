#include "main.h"

/**
 * factorial - calculate the factorial
 * @n: the number to claculate factorial
 * Return: intiger value
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
