#include<stdio.h>
#include<string.h>
#include "main.h"

/**
 * cap_string - capitalizes every word of a string
 * @str: string to modify
 *
 * Return: the resulting string
 */

char *cap_string(char *str)
{
	int i = 0;
	int  flag = 1;

	while (str[i] != '\0')
	{
		if (flag && str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '.')
		{
			flag = 1;
		}
		else
		{
			flag = 0;
		}
		i++;
	}
	return (str);
}
