#include "main.h"

/**
 * rev_string - reversing string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	char res;

	int i, ver1, ver;

	ver = 0;
	ver1 = 0;

	while (s[ver] != '\0')
	{
		ver++;
	}

	ver1 = ver - 1;

	for (i = 0; i < ver / 2; i++)
	{
		res = s[i];
		s[i] = s[ver1];
		s[ver1--] = res;
	}
}
