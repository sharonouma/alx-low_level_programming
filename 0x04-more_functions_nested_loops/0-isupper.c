#include "main.h"

/**
 * _isupper - checks for uppercase letter
 * @c: character to check for
 *
 * Return: 1 if c is uppercase otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
