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
using namespace std;

struct Node
{
    string key;
    struct Node* next;
};

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

    // Your time to shine starts now
    
    cout << "==== Printing the contents of the first 5 slots ====" << endl;

    //pointer to array
    Node** head;

    //fill with k node pointers
    head = new Node * [k];

    //fill hash table
    int hash = 0;
    for (int i = 0; i < n; i++) {
        hash = hash_function(texts[i], k);
        Node* newNode = new Node();
        newNode->key = texts[i];
        *(head + hash) = newNode;
    }

    for (int i = 0; i < k; i++) {
        Node* temp = *(head + i);
        cout << temp->key << endl;
    }


    cout << "==== Printing the slot lengths ====" << endl;

    cout << "==== Printing the standard variance =====" << endl;

    return 0;
}