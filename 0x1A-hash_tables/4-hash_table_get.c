#include "hash_tables.h"


/**
 * hash_table_get - function to retrieve value associeted with key
 * @ht: pointer to hash table
 * @key: key to retrive value
 *
 * Return: NULL if key does not exit or value.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index;
    hash_node_t *bucket;

    if (ht == NULL || key == NULL || strlen(key) == 0)
        return (NULL);

    index = key_index((const unsigned char *)key, ht->size);
    bucket = ht->array[index];

    while (bucket != NULL)
    {
        if (strcmp(bucket->key, key) == 0)
            return (bucket->value);
        bucket = bucket->next;
    }

    return (NULL);
}
