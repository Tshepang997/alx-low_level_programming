#include "main.h"
/**
 * swap_int -  a function that swaps the values of two integers
 * @a: first int to swap
 * @b: second int to swap
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
