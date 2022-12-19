#include "main.h"
/**
 *_puts - prints a string
 *@str: string to print
 *
 *Description: prints a string
 *On success: return the number of characters printed
 */

void _puts(char *str)
{
int count = 0;

while (count >= 0)
{
if (str[count] == '\0')
{
_putchar('\n');
break;
}
_putchar(str[count]);
count++;
}
}
