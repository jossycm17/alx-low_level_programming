#include <stdio.h>
/**
 * _strlen - return the length
 * @str: the string to get the lenght
 * Return: The lenght of string
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
