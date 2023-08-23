#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *newNode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}
void printPostorder(struct node *node)
{
    if (node == NULL)
        return;
    printPostorder(node->left);
    printPostorder(node->right);
    printf("%d ", node->data);
}
void printInorder(struct node *node)
{
    if (node == NULL)
        return;
    printInorder(node->left);
    printf("%d ", node->data);
    printInorder(node->right);
}
void printPreorder(struct node *node)
{
    if (node == NULL)
        return;
    printf("%d ", node->data);
    printPreorder(node->left);
    printPreorder(node->right);
}
int main()
{
    struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(6);
    root->left->left = newNode(3);
    root->left->right = newNode(4);
    root->left->right->left = newNode(5);
    root->right->left = newNode(7);
    root->right->left->left = newNode(8);
    root->right->left->right = newNode(9);
    root->left->right->left->right=newNode(0);
    root->right->right = newNode(10);
    printf("\nPreorder traversal of binary tree is: ");
    printPreorder(root);
    printf("\n\nInorder traversal of binary tree is: ");
    printInorder(root);
    printf("\n\nPostorder traversal of binary tree is: ");
    printPostorder(root);
    return 0;
}