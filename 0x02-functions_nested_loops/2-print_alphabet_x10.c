#include<stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - entry point
 * Description: Prints 10 times alphabet.
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int a;
	char alpha;

	for (a = 1; a <= 10; a++)
	{
		while (alpha <= 'z')
		{
			putchar(alpha);
			alpha++;
		}
	}
	putcharr('\n');
}
