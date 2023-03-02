#include "main.h"

/**
 * string_toupper - Change all lowercase letter to uppercase
 * @str: the string to be changed
 * Return: A pointer to the cahnged string 
 */
char *string_toupper(char *)
{
	int index = 0;
	while(str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}
