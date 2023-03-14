#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars and intializes
 * it with a specific character.
 * @c: char to be initialized
 * @size: number of bytes to allocate
 * Return: a pointer to the array or a null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}
