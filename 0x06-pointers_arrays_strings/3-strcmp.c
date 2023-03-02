#include "main.h"

/**
 * _strcmp - compare pointer to string
 * @s1: a pointer to fist sring
 * @s2: a pointer to second string
 * Return: if srt1 < srt2 the negative difference if str1 = str2 ,0
 * If str1 < str2, the posetive difference
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
