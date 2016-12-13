#include <stdio.h>
#include <stdlib.h>

typedef struct tree_node{
    int index;
    struct tree_node *rlink;
    struct tree_node *llink;
} node;

node *insert(node *root,int insert_value) {

    if (root == NULL) {
        node *tmp;
        tmp = (node*)malloc(sizeof(node));
        tmp->index = insert_value;
        tmp->llink = NULL;
        tmp->rlink = NULL;
        return tmp;
    }

    if (insert_value >(root->index))
    {
        root->rlink = insert(root->rlink , insert_value);
    }
    else if(insert_value < (root->index))
    {
        root->llink = insert(root->llink , insert_value);
    }
    return root;
}

void PrintInorder(node *node)
{
        if(node==NULL)
        {
                return;
        }
        PrintInorder(node->llink);
        printf("%d ",node->index);
        PrintInorder(node->rlink);
}

void PrintPreorder(node *node)
{
        if(node==NULL)
        {
                return;
        }
        printf("%d ",node->index);
        PrintPreorder(node->llink);
        PrintPreorder(node->rlink);
}

void PrintPostorder(node *node)
{
        if(node==NULL)
        {
                return;
        }
        PrintPostorder(node->llink);
        PrintPostorder(node->rlink);
        printf("%d ",node->index);
}

int main() {
    node *root = NULL;
    root = insert(root, 4);
    root = insert(root, 1);
    root = insert(root, 2);
    root = insert(root, 7);

    PrintInorder(root);

    return 0;
}
