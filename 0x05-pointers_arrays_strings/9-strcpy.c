#include "main.h"

/**
 * *_strcpy - copies the string pointed to src to dest
 * @dest: source of copy
 * @src: destination of copy
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
