#include "main.h"

/**
 * _strlen - the string length
 * @s: string length to print
 *
 * Return: return length of s
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
