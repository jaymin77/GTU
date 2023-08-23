// binary search tree
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int key;
    struct node *left, *right;
};

struct node *newNode(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d  ", root->key);
        inorder(root->right);
    }
}

struct node *insert(struct node *node, int key)
{
    if (node == NULL)
        return newNode(key);
    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);

    return node;
}

int main()
{
    int val, rval;
    struct node *root = NULL;
    printf("\nEnter a root node: ");
    scanf("%d",&rval);
    root = insert(root,rval);

    while (1==1)
    {
        printf("\nEnter a child node: ");
        scanf("%d",&val);
        insert(root,val);
        printf("\nELEMENTS IN INORDER ARE: ");
        inorder(root);
        
    }    
    return 0;
}
