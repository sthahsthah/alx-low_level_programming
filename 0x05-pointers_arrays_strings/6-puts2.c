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
	int h = 0;

	while (str[h] != '\0')
	{
		if (h % 2 == 0)
		{
			putchar(str[h]);
		}
		h++;
	}
	putchar('\n');
}
