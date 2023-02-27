#include<stdio.h>

/**
 * swap_int - swap the intiger
 *
 * @a: the first intiger
 * @b: the second intiger
 * Return: nothing
 */
void swap_int(int *a, int *b)

{
	int temp = *a;
	*a = *b;
	*b = temp;
}
