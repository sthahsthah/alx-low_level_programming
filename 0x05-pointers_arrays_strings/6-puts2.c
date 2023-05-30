#include<stdio.h>
#include<string.h>

/**
  * puts2 - Entry point
  * Description - 'prints only even numbers of a string'
  * @str: string to be used
  * Return: void
  */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}
