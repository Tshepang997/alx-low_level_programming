#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: input value
 * @src: input value
 * @n: the lenght of int
 *
 * Return: void
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
	*(dest + i) = '\0';
	}
	return (dest);
}
