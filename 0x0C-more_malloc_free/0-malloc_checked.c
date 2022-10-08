#include "main.h"

/**
 * malloc_checked - allocates memory using malloc, exit(98)
 * if it fails.
 * @b: size of memory block to be allocated
 *
 * Return: return pointer to the memory of the address block
 */
void *malloc_checked(unsigned int b)
{
	void *block;

	block = malloc(b);
	if (block == NULL)
		exit(98);
	return (block);
}
