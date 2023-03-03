#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int n;
	int o;

	n = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	o = 0;
	while (src[o] != '\0')
	{
		dest[n] = src[o];
		n++;
		o++;
	}
	dest[n] = '\0';
	return (dest);
}
