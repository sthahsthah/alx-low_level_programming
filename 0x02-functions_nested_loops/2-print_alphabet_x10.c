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

	for (a = 97; a <= 122; a++)
	{
		putchar(a * 10);
		putchar('\n');
	}
}
