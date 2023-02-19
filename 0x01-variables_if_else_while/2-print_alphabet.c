#include <stdio.h>

/**
 * main - Prints out the alphabet in lowercase
 *
 * Return: successfully 0
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);

	putchar('\n');

	return (0);
}
