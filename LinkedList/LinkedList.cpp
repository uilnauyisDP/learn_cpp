#include "Node.h"
#include "LinkedList.h"

#include <iostream>

using namespace std;

LinkedList::LinkedList(/* args */)
{
    sentinel_left = new Node();
    sentinel_right = new Node();
    sentinel_left->next = sentinel_right;
    sentinel_right->prev = sentinel_left;
}

LinkedList::~LinkedList()
{
}

void LinkedList::Append(int val) {
    Node* node = new Node();
    node->value = val;
    node->next = sentinel_right;
    node->prev = sentinel_right->prev;

    sentinel_right->prev->next = node;
    sentinel_right->prev = node;
    count++;
}

void LinkedList::PrintNodes() {
    Node* node = sentinel_left->next;
    while (node != sentinel_right) {
        cout << node->value << " ";
        node = node->next;
    }
    cout << endl;
}
