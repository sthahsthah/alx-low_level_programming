#include<stdio.h>
#include<string.h>
#include"main.h"

/**
 * _strcmp - compares string
 * @s1: string value
 * @s2: string value
 * Return: s1,s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
