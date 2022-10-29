#include "main.h"

/**
 * get_bit - get the value of bit at the given index
 * @n: the number
 * @index: index starting from 0 of the bit required
 *
 * Return: the converted value
 */

int get_bit(unsigned long int n, unsigned int index)
{
		if (index > 63)
			return (-1);

		return ((n >> index) & 1);
}
