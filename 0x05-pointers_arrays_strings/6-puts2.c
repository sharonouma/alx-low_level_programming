#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int var, i;

	var = 0;

	while (str[var] != '\0')
	{
		var++;
	}

	for (i = 0; i < var; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
