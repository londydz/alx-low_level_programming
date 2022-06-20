#include "main.h"

/**
 * _strspn - Function prototype
 * Description : Gets the length of a prefix substring
 * @s: Pointer to the string to search
 * @accept: The characters to match in the string s
 * Return: The number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int a;
	int num;

	for (i = 0;; i++)
	{
		for (a = 0; accept[a] > '\0'; a++)
		{
			if (s[i] != accept[x])
				continue;
			num++;
			break;
		}
		if (accept[x] == '\0')
			break;
	}

	return (num);
}
