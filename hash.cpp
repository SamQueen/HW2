#include <iostream>
#include <string>
#include "hash.h"

using namespace std;

struct Node {
    int data;
    struct Node* Next;
};

int hash_function(string text, int k) {
    // Implement your own hash function here
    int ascii_value = 0;

    for (int i = 0; i < text.length(); i++) {
        ascii_value += int(text[i]);
    }

    return ascii_value % k;
}