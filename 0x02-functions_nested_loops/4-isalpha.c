#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the char should be checked
 *
 * Return: 1 if the char is a letter or lowercase otherwise return 0
 */
int _isalpha(int c);
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
