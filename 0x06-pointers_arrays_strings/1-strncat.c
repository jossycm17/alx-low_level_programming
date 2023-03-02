#include "main.h"

/**
 * _strncat - Concatinate two string using at most
 * @dest: The string to be appended upon
 * @src: the string to be appended on dest
 * @n: the number of byte from src to be appended to dest
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
