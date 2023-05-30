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
	int fulls, halfs;

	fulls = 0;

	while (str[fulls] != '\0')
	{
		fulls++;
		halfs = fulls / 2;

		if (fulls % 2 == 1)
		{
			halfs++;
		}
	}
	while (halfs < fulls)
	{
		_putchar(str[halfs]);
		halfs++;
	}
	_putchar('\n');
}
