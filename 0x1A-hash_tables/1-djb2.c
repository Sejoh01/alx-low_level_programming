#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */
class HashTable:
    def __init__(self, size):
        self.size = size
        self.table = [None] * size

def hash_table_create(size):
    if size <= 0:
        return None
    return HashTable(size)

# Example usage:
# Create a hash table with a size of 10
my_hash_table = hash_table_create(10)
if my_hash_table is not None:
    print("Hash table created successfully.")
else:
    print("Failed to create the hash table.")

