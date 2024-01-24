// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <strings.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 26;

// Hash table
node *table[N];
unsigned int hashvalue;
unsigned int count;
// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // TODO
    hashvalue = hash(word);
    node *cursor = table[hashvalue];
    while(cursor !=0){
        if(strcasecmp(word, cursor->word) == 0){
            return true;
        }
        cursor = cursor->next;
    }
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    unsigned long sum = 0;

    for(int i =0;i <strlen(word); i++){
        sum+=tolower(word[i]);



    }
    return sum % N;
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // TODO
    FILE *file = fopen(dictionary, "r");
    if(file == NULL){
        printf("Unable to open %s\n", dictionary);
    }
    char word[LENGTH+1];
    while(fscanf(file, "%s", word) != EOF){
        node *n = malloc(sizeof(node));


    if (n == NULL){
        return false;
    }
    strcpy(n->word, word);
    hashvalue = hash(word);
    n->next = table[hashvalue];
    table[hashvalue] = n;
    count++;
    }
    fclose(file);
    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    if(count > 0){
        return count;
    }
    return 0;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO

    for(int j =0;j < N; j++){

        node *cursor = table[j];
        while(cursor){
            node *tmp = cursor;
            cursor = cursor->next;
            free(tmp);
        }

    }
    return true;
}
