#pragma once

#include "Node.h"
class LinkedList
{
private:
    Node* sentinel_left;
    Node* sentinel_right;
    int count;
public:
    LinkedList(/* args */);
    ~LinkedList();
    void Append(int val);
    void PrintNodes();
};