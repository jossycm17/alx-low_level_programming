#include "mian.h"
#include <stdio.h>
/**
 * print_array - print n element array
 * @a: arrayof intiger
 * @n: number of element of array
 * Return: void
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
