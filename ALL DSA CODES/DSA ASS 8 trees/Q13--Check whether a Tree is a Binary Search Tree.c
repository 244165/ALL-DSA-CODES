#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

static struct node *prev = NULL;


int is_bst(struct node* root)
{
    if (root)
    {
        if (!is_bst(root->left))
            return 0;
        if (prev != NULL && root->data <= prev->data)
            return 0;
        prev = root;
        return is_bst(root->right);
    }
    return 1;
}

struct node* newNode(int data)
{
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return(node);
}

int main()
{

    struct node *root = newNode(40);
    root->left        = newNode(20);
    root->right       = newNode(60);
    root->left->left  = newNode(10);
    root->left->right = newNode(30);
    root->right->right = newNode(80);
    root->right->right->right = newNode(90);
    if (is_bst(root))
        printf("TREE 1 Is BST");
    else
        printf("TREE 1 Not a BST");
    prev = NULL;

    return 0;
}
