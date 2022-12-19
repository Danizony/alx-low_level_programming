#include "main.h"
/**
 *_strlen - returns the length of string
 *@s: string
 *Return: returns length
 */
int _strlen(char *s)
{
int cnt, ln;
ln = 0;
for (cnt = 0; s[cnt] != '\0'; cnt++)
ln++;

return (ln);
}
