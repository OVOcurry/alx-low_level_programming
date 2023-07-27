#include "main.h"

/**
 * reverse_array - reverse content of an array of integer
 * @a: array of integers
 * @n: numbers to bt reversed
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0 ; i < n-- ; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
