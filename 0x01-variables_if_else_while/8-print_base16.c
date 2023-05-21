#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	putchar(i + '0');
	}
	for (i = 10; i <= 15; i++)
	{
	putchar(i + 'a' - 10);
	}
	putchar('\n');
	return (0);
}
