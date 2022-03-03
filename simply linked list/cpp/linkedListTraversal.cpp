/* In the previous program, we have created
a simple linked list with three nodes. 
Let us traverse the created list and print 
the data of each node. For traversal, let us 
write a general-purpose function printList() 
that prints any given list.
*/

#include <bits/stdc++.h>
using namespace std;

class Node{
    public:  
        int data;
        Node *next;
};

void printList(Node *n) {
    while (n != NULL) {
        cout << n->data <<" ";
        n = n->next;
    }
}

int main(){
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printList(head);

    return 0;
}