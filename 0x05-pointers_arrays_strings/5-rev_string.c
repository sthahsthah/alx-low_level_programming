#include<stdio.h>
#include "main.h"
#include<string.h>

/**
  * rev_string - Entry point
  * Description - 'printing a string in reverse, but in halves'
  * @s: string to be reversed
  * Return: void
  */

void rev_string(char *s)
{
	int len = strlen(s);
	int start = 0;
	int end = len - 1;

	while (start < end)
	{
		char temp = s[start];

		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
