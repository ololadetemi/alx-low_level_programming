#include "main.h"
/**
 * _strlen -> function to get length of the string
 * @s: string pointer to pass to the function
 * Return: returns length of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while  (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
