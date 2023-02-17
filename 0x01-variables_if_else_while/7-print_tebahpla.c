#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Succes)
 */

int main(void)
{
	int a;

	a = 'z';
	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
