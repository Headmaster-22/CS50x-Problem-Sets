// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// Number of buckets in hash table
const unsigned int N = 26 * 26 * 26;

// Hash table
node *table[N];
unsigned int dictionary_size = 0;

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // hash position
    int x = hash(word);
    // ptr variable for traversal
    node *ptr = table[x];

    // Access linked list and search comp
    while (ptr != NULL)
    {

        // check for match with current node
        if (strcasecmp(word, ptr->word) == 0)
        {
            return true;
        }

        ptr = ptr->next;
    }

    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    unsigned int hash = 0;

    for (int i = 0; i < strlen(word); i++)
    {

        hash = 31 * hash + tolower(word[i]);
    }

    return hash % N;
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // initialize one word array
    char word[LENGTH + 1];
    int x;

    FILE *input = fopen(dictionary, "r");
    if (input == NULL)
    {
        return false;
    }

    while (fscanf(input, "%s", word) != EOF)
    {

        // initialize new node
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return false;
        }

        // get hash value of word
        x = hash(word);

        // set values of n
        n->next = NULL;
        strcpy(n->word, word);

        // insert node
        if (table[x] == NULL)
        {
            table[x] = n;
        }
        else
        {
            n->next = table[x];
            table[x] = n;
        }

        dictionary_size++;
    }

    fclose(input);
    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    return dictionary_size;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // free list from each array element
    for (int i = 0; i < N; i++)
    {

        node *cursor = table[i];

        // free list from head element table[i]
        while (cursor != NULL)
        {

            // tmp hold variable so cursor can move down list before free
            node *tmp = cursor;

            // point to next link
            cursor = cursor->next;

            free(tmp);
        }

        if (cursor == NULL && i == N - 1)
        {
            return true;
        }
    }

    return false;
}
