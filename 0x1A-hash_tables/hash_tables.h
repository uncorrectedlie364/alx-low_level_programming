#ifndef hash_tables_h
#define hash_tables_h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * struct hash_node_s - node of a hash table
 * @key: the key string
 * @value: the value corresponding to a key
 * @next: a pointer to the next node in the list
 */

typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_nde_s *next;
}hash_node_t;

/*
 * struct hash_table_s - hash table data structure
 * @size: the size of the array
 * @array: an array of size @size
 *
 * each cell in the array points to the first node of a linked list
 * to use chainin collision handling on HashTable
 */

typedef struct hash_table_s
{
	unsigned long int  size;
	hash_node_t **array;
}hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_tabl_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

/*
 * struct sash_node_s - node of a sorted hash table
 * @key: the key tring
 * @value: the value to rresponding key
 * @next: a pointer to the next node in the lis
 * @sprev: a pointer to the next element of the sorted linked list
 * @snext: a pointer t the next element of the sortrd linked list
 */

typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shas_node_s *next;
	struct shas_node_s *sprev;
	struct shas_node_s *snext;
} shash_node_t;

/*
 * struct shash_table_s - sorted hash table data structure
 * @size: the size of the array
 * @array: an array of size @size
 * @shead: a pointer to the first element of the sorted linked list
 */

typedef struct shash_table_s
{
igned long int size;
shash_node_t **array;
shash_node_t *shead;
shash_node_t *stail
} shash_table_t;

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set()shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

#endif
