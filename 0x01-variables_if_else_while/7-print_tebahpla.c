#include <stdio.h>

/**
 * main - Prints the lowercase in reverse
 *
 * Return: successfully 0.
 */
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
		putchar(l);

	putchar('\n');

	return (0);
}
