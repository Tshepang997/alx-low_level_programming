#include "main.h"
/**
 * void positive_or_negative - checks for the negative or positive numbers
 *
 * @i: number to be checked
 *
 * Return: success 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
