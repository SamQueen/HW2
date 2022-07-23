#include <iostream>
#include <string>
#include <cmath>

using namespace std;

#ifndef SOME_HEADER_GUARD_WITH_UNIQUE_NAME
#define SOME_HEADER_GUARD_WITH_UNIQUE_NAME

struct Node
{
    string key;
    struct Node* next;
};

#endif