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

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
