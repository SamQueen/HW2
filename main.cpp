/*
CSE 310 HW02 - Hash Function DIY Contest
Instructor: Yiran "Lawrence" Luo
Your name(s):
Your team alias: 
*/

#include <iostream>
#include <iomanip>
#include <string>
#include "hash.h"
#include "linked_list.h"
using namespace std;

int main() 
{

    int k = 0;
    int n = 0;
    string texts[500];

    // WARNING: Start of the tokenizer that loads the input from std::cin, DO NOT change this part!
    cin >> k;
    string line;
    getline(cin, line);

    while (getline(cin, line)) 
    {
        texts[n] = line;
        n++;
    }
    // WARNING: End of the tokenizer, DO NOT change this part!

    // By this point, k is the # of slots, and n is the # of tokens to fit in
    // texts[] stores the input sequence of tokens/keys to be inserted into your hash table

    // The template is able to be compiled by running 
    //   make
    //   ./encoder < inputs/sample_input.txt
    // which puts out the placeholders only.

    // Your time to shine starts now-----------------------------------------
    
    //Create Hash Table as an array of pointers to linked lists
    // 
    //pointer to array
    Node** head;

    //fill with k node pointers
    head = new Node * [k];

    for (int i = 0; i < k; i++) {
        *(head + i) = NULL;
    }

    //fill hash table
    int hash = 0;
    for (int i = 0; i < n; i++) {
        //send the word to the hash function
        hash = hash_function(texts[i], k);
        //create new node and assign its key
        Node* newNode = new Node();
        newNode->key = texts[i];
        
        //create node pointer
        Node* selectedNode = *(head + hash);

        //if the list is empty add node else aadd to end of list
        if (selectedNode == NULL) {
            *(head + hash) = newNode;
        }
        else {
            while (selectedNode->next != NULL) {
                selectedNode = selectedNode->next;
            }
            selectedNode->next = newNode;
        }
    }

    cout << "==== Printing the contents of the first 5 slots ====" << endl;

    print_hash_table(head, k);

    cout << "==== Printing the slot lengths ====" << endl;

    print_slots(head, k);

    cout << "==== Printing the standard variance =====" << endl;

    //TODO calulate the variance
    cout << "Variance: " << endl;

    return 0;
}