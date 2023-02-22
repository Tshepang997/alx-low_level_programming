#include "main.h"

/**
 * _islower - if a character is lowercase
 * @c: check the char
 *
 * Return: 1 if char is lowercase 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
