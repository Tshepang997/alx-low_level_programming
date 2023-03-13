#include "main.h"

/**
 * _strpbrk - finds first matching char in string
 * @s: input string to search for matching char
 * @accept: characters that could be matched
 * Return: pointer to matching char
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return ('\0');
}
