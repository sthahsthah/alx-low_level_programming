#include<stdio.h>
#include "main.h"

/**
 * print_alphabet - entry point
 * Description: Prints lowercase letters
 * Return: Always 0
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
