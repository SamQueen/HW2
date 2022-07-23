#include <iostream>
#include <string>
#include "hash.h"

using namespace std;

int hash_function(string text) {
    // Implement your own hash function here
    return 1;
}

//default Node class
//used for each slot index that will hold an individual element
struct Node
{
    //each Node will hold the following:
    string element;         //a unique string value
    struct Node* next;      //a linking chain to the next Node
};

//function to return the sum of each ASCII value of a given string
int calculateASCII(string longElement)
{
    //create sumChar variable to hold the final value of the string
    int sumChar = 0;

    //iterate through the string
    for(int i = 0; i < longElement.length(); i++)
    {
        //continously add each char's ASCII value to sumChar
        sumChar += longElement[i];
    }

    //return value
    return sumChar;
};

//create Hash Table class
class HashTable
{
    //values held inside each HashTable
    Node *head = NULL;                  //reference to the head Node
    int originalSlotAmount = 0;         //number of slots

    //private function(s) used within this class alone
    //description of each function given when defined below
    private:
        int calculateSlot(int key, int existingSlots);

    //public function(s) used within this class
    //description of each function given when defined below
    public:
        HashTable(int slots);

        void insertElement(string keyElement, int keySlot);
        void printTable(int keySlots, HashTable hashTable);
};

//PRIVATE FUNCTION(S)

//calculateSlot(int key, int existingSlots)
//using the key value and existing slot value, function will
//calculate the appropriate slot index an element will belong to
int HashTable::calculateSlot(int key, int existingSlots)
{
    //calculate the appropriate slot using modulo
    int setSlot = key % existingSlots;
};

//PUBLIC FUNCTION(S)

//HashTable(int slots)
//overloaded constructor -- used to create HashTable of given size
HashTable::HashTable(int slots)
{
    //instantiate HashTable with given size
    HashTable hTable = new HashTable[slots];

    //instantiate values inside
    hTable.head->element = NULL;
    hTable.head->next = NULL;
};

//insertElement(string keyElement, int keySlot)
//using the slot value, keyElement will be inserted into hashTable[keySlot]
void HashTable::insertElement(string keyElement, int keySlot)
{
    //insert keyElement into determined slot index (keySlot)
    hashTable[keySlot] = keyElement;
};

//printTable(int keySlots, HashTable hashTable)
//function will print the contents inside the hash table
void HashTable::printTable(int keySlots, HashTable hashTable)
{
    //iterate through each slot in the hash table
    for(int i = 0; i < keySlots; i++)
    {
        //print according to specifications
        cout << "Slot " << i << ": ";

        //print the contents of said slot index
        while(hashTable.head->element != NULL)
        {
            cout << hashTable.head->element << " ";
            hashTable.head = hashTable.head->next;
        }

        //newline
        cout << "\n";
    }
};