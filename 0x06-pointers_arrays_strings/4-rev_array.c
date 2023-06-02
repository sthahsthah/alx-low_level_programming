#include<stdio.h>
#include<string.h>
#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int c = n - 1;

	while (i < c)
	{
		int temp = a[i];

		a[i] = a[c];
		a[c] = temp;

		i++;
		c--;
	}
}
