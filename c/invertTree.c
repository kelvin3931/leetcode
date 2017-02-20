#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode* invertTree(struct TreeNode *root) {

    struct TreeNode *tmp;
    tmp = malloc(sizeof(struct TreeNode));

    if (root == NULL) {
        return NULL;
    }

    tmp = root->right;
    root->right = root->left;
    root->left = tmp;

    invertTree(root->left);
    invertTree(root->right);

    return root;
}

void printinorder(struct TreeNode *node) {
    if (node == NULL) {
        return;
    }

    printinorder(node->left);
    printf("%d ", node->val);
    printinorder(node->right);

}

struct TreeNode *insert(struct TreeNode *root, int val) {
    if (root == NULL) {
        struct TreeNode *tmp;
        tmp = malloc(sizeof(struct TreeNode));
        tmp->val = val;
        tmp->left = NULL;
        tmp->right = NULL;
        printf("tmp->val=%d\n", tmp->val);
        return tmp;
    } else if (root->val < val) {
        root->right = insert(root->right, val);
    } else if (root->val > val) {
        root->left = insert(root->left, val);
    }

    return root;
}

int main() {
    struct TreeNode *node = NULL;

    node = insert(node ,4);
    node = insert(node ,2);
    node = insert(node ,7);
    node = insert(node ,1);
    node = insert(node ,3);
    node = insert(node ,6);
    node = insert(node ,9);

    printinorder(node);
    printf("\n");

    node = invertTree(node);

    printinorder(node);
    printf("\n");

    return 0;    
}
