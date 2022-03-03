#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;                // Data element
    struct node * left;      // Pointer to the left Node
    struct node * right;     // Pointer to the right Node
}

// initialize node root, not using pointer
struct node root;

// initialize node pointer
struct node * MakeNode(int value){
    struct ndoe * temp = (node * ) malloc(sizeof(node));
    temp->data = value;
    temp->left = temp->right=NULL;
    return temp;
}

int maxDepth(struct node* node){
    if (node == NULL){
        return 0;
    }else{
        int lDepth = maxDepth(node->left);
        int rDepth = maxDepth(node->right);

        /* use the larger one*/
        if (lDepth > rDepth)
            return (lDepth + 1);
        else
            return (rDepth + 1);
    }
}

int main(
    return 0;
)
