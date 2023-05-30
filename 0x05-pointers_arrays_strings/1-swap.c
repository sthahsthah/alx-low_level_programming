#include<stdio.h>
#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: arg 1.
 * @b: arg 2.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
