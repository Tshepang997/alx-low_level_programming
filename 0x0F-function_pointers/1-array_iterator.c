#include "function_pointers.h"
/**
 * array_iterator - function that executes a function
 * @array: input
 * @size: size of an array
 * @action: pointer to the function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
