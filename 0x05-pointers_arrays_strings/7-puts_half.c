#include<stdio.h>
#include<string.h>

/**
  * puts_half - Entry point
  * Description - 'printing second half of a string'
  * @str: string to be used
  * Return: void
  */

void puts_half(char *str)
{
	int length = strlen(str);
	int start = (length - 1) / 2;

	for (int i = start; i < length; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
