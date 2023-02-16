#include <stdio.h>
/**
 * main - A program that print different types of computer types
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("size of a char: %ld byte(s)\n", sizeof(a));
printf("size of a int: %ld byte(s)\n", sizeof(b));
printf("size of a long int: %ld byte(s)\n", sizeof(c));
printf("size of a long long int: %ld byte(s)\n", sizeof(d));
printf("size of a float: %ld byte(s)\n", sizeof(f));
return (0);
}
