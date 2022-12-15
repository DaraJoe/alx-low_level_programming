#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array
 * @n: number of element in the array
 * Return: reverse
 */
void reverse_array(int *a, int n)
{
	int b;
	int c;

	for (b = 0; b < n; b++)
	{
		n--;
		c = a[b];
		a[b] = a[n];
		a[n] = c;
	}
}

