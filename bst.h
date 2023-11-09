#ifndef BST_H
#define BST_H

struct Node {
    int value;
    int count;
    struct Node* left;
    struct Node* right;
};

struct Node* insert(struct Node* root, int value);
struct Node* search(struct Node* root, int value);
void inorderTraversal(struct Node* root);
int findMostFrequent(struct Node* root);

#endif // BST_H
