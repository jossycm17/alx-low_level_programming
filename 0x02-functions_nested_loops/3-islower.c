#include "main.h"
/**
 * _islower - Entry point
 * @c: The character to be checked
 * Return: 0 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
