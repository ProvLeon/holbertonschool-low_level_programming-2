/*
 * File: 6-cap_string.c
 * Auth: Brennan D Baraban
 */

#include "holberton.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			if (str[index - 1] == ' ' ||
		            str[index - 1] == '\t' ||
			    str[index - 1] == '\n' ||
			    str[index - 1] == ',' ||
			    str[index - 1] == ';' ||
			    str[index - 1] == '.' ||
			    str[index - 1] == '!' ||
			    str[index - 1] == '?' ||
			    str[index - 1] == '"' ||
			    str[index - 1] == '(' ||
			    str[index - 1] == ')' ||
			    str[index - 1] == '{' ||
			    str[index - 1] == '}')
				str[index] -= 32;
		}

		index++;
	}

	return (str);
}





