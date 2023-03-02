#include "main.h"

/**
 * reverse_array - Reverse the content of array
 * @a: the array of intiger to reversed
 * @n: the number of element in array
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
