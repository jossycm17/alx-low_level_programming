#include "main.h"

/**
 * _isdigit - caheck if the character is digit
 * @c: The number to be checked
 * Return: 1 for character or 0 for any else
 */

int _isdigit(int c)
{
	if (c >= 40 && c <= 57)
	{
		return (1);
	}
	return (0);
}
