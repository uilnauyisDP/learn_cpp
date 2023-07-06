#include "LinkedList.h"
#include <iostream>

int main() {
    LinkedList ll;
    ll.Append(1);
    ll.PrintNodes();
    ll.Append(2);
    ll.PrintNodes();
    ll.Append(3);
    ll.PrintNodes();
}