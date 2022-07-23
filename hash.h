#include <iostream>
#include <string>
#include <cmath>

// You are free to use additional libraries as long as it's not BANNED per instruction.

using namespace std;

int hash_function(string text);

//include functions used in hash.cpp
struct Node;
int calculateASCII(string longElement);
class HashTable;
int calculateSlot(int key, int existingSlots);
HashTable(int slots);
void insertElement(string keyElements, int keySlot);
void printTable(int keySlots, HashTable hashTable)