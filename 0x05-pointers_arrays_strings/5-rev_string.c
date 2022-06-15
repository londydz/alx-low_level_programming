#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be modified
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, c, k;
	char aux;

	c = 0;
	k = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	k = c - 1;
	for (i = 0; i < c / 2; i++)
	{
		aux = s[i];
		s[i] = s[k];
		s[k] = aux;
		k -= 1;
	}
}
