#include "hash_tables.h"

/**
 * hash_djb2 - is the hash function implementing the djb2 algorithm.
 * @str: Indicate the string to hash.
 *
 * Return: is on the calculated hash.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int count;

	hash = 5381;
	while ((count = *str++))
		hash = ((hash << 5) + hash) + count; /* hash * 33 + count */

	return (hash);
}