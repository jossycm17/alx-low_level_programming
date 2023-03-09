#include "main.h"

/**
 * _pow_recursion - returnthe value of x raised to the power of y
 * @x: the value to multiply 
 * @y: the time to multiply
 * Return: the value meltiplied y times
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y >= 1)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
