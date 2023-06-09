#include "hash_tables.h"

/**
 * key_index - This get the index at which a key/value pair should
 *             be stored in array of a hash table.
 * @key: Indicate the key to get the index of.
 * @size: Indicate the size of the array of the hash table.
 *
 * Return: is on the index of the key.
 *
 * Description: Uses the djb2 algorithm.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
