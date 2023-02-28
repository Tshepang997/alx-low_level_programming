#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: to check char
 * Return: length
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
