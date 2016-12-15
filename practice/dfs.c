#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *left;
    struct node *right;
} treeNode;

void insert_tree(treeNode **, int);
void DFS(treeNode *head);
void delete(treeNode **head);

void test_insert(treeNode *node, int num) {

    treeNode *temp = node, *prev = node;

    if (node == NULL) {
        node = (treeNode *)malloc(sizeof(treeNode));
        node->value = num;
        node->left = node->right = NULL;
    }
    else {
        while (node != NULL)
        {
            if (num > node->value)
            {
                prev = temp;
                temp = temp->right;
            }
            else
            {
                prev = temp;
                temp = temp->left;
            }
        }
        temp = (treeNode *)malloc(sizeof(treeNode));
        temp->value = num;
        if (num >= prev->value)
        {
            prev->right = temp;
        }
        else
        {
            prev->left = temp;
        }
    }
}

int main() {
    treeNode *head = NULL;

    test_insert(head, 4);
    
    insert_tree(&head, 0);
    insert_tree(&head, 5);
    insert_tree(&head, 2);
    insert_tree(&head, 3);
    insert_tree(&head, 1);

    DFS(head);

    delete(&head);

    DFS(head);

    return 0;
}

void insert_tree(treeNode **node, int num) {
    treeNode *temp = *node, *prev = *node;    
    if (*node == NULL)
    {
        *node = (treeNode *)malloc(sizeof(treeNode));
        (*node)->value = num;
        (*node)->left = (*node)->right = NULL;
    }
    else
    {
        while (temp != NULL)
        {
            if (num > temp->value)
            {
                prev = temp;
                temp = temp->right;
            }
            else
            {
                prev = temp;
                temp = temp->left;
            }
        }
        temp = (treeNode *)malloc(sizeof(treeNode));
        temp->value = num;
        if (num >= prev->value)
        {
            prev->right = temp;
        }
        else
        {
            prev->left = temp;
        }
    }
}

void DFS(treeNode *head)
{
    if (head)
    {
        if (head->left)
        {
            DFS(head->left);
        }
        if (head->right)
        {
            DFS(head->right);
        }
        printf("%d  ", head->value);
    }
}
 
void delete(treeNode **head)
{
    if (*head != NULL)
    {
        if ((*head)->left)
        {
            delete(&(*head)->left);
        }
        if ((*head)->right)
        {
            delete(&(*head)->right);
        }
        free(*head);
    }
}
