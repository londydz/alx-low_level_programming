#include "main.h"

/**
 * _strchr - Function prototype
 * Description : Locates a character in a string.
 * @s: Pointer to the string to search
 * @c: The character to be located
 * Return: The pointer to the destination string
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}

	return (0);
}
