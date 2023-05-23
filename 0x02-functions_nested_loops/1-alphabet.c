#include<stdio.h>
#include "main.h"

/**
 * print_alphabet - entry point
 * Description: Prints lowercase letters
 * Return: Always 0
 */

void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
}
