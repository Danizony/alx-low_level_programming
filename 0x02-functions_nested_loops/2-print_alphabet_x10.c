#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int num, i;

	for (num = 0; num <= 9; num++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);

		}
		_putchar('\n');
	}

}
