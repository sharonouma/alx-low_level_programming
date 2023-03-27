#include "main.h"

/**
 * print_rev - printing in reverse
 * @s: string to reverse
 */
void print_rev(char *s)
{
	int i;

	i = 0;

	while (*(s + i))
		i++;
	i = i - 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
