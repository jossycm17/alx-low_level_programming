#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - return if number anumber is prime
 * @n: the number to be chekced
 *
 * Return: the prime number
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - Check if the number is prime
 * @n: the number to be checked
 * @i: the iteration time
 *
 * Return: 1 for prime or 0 for composite
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
	return (1);
return (check_prime(n, i + 1));
}
