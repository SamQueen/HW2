#include <iostream>
#include <string>
#include "hash.h"
#include "linked_list.h"

using namespace std;

int hash_function(string text, int k) {
    // Implement your own hash function here
    int ascii_value = 0;

    for (int i = 0; i < text.length(); i++) {
        ascii_value += int(text[i]);
    }

    return ascii_value % k;
}

//prints the first k elements of hash table
void print_hash_table(Node** head, int k) {
    for (int i = 0; i < k; i++) {
        //select begining o flinked list
        Node* temp = *(head + i);

        cout << i << "-->\t";

        //continue until the current link list next node is null
        while (temp != NULL) {
            cout << temp->key << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

//prints the size of the linked list in hash table
void print_slots(Node** head, int k) {
    for (int i = 0; i < k; i++) {
        //select begining o flinked list
        Node* temp = *(head + i);

        cout << i << "-->\t";
        int count = 0;
        //continue until the current link list next node is null
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        cout << count << endl;
    }
}

//TODO calc var
int var(Node** head, int k) {
    return 1;
}