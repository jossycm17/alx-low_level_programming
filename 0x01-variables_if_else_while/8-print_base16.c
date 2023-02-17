#include <stdio.h>
/**
 * main - Entry point
 *
 * Return 0 (Success)
 */

int main(void)
{
	char c;

	int b;

	c = 'a';
	b = 0;
	while
		(b < 10)
		{
			putchar(b + '0');
			b++;
		}
	while
		(c <= 'f')
		{
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
