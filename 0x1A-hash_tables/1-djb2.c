#include "hash_tables.h"

/**
* hash_djb2 - Hash function implementing the djb2 algorithm.
* @str: The string to hash
*
* Return: The calculated hash.
*/

unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    int cnt;

    hash = 5381;
    while ((cnt = *str++))
        hash = ((hash << 5) + hash) + cnt; /* hash * 33 + cnt */

    return (hash);
}
