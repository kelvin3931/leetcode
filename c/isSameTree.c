#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

int isSameTree(struct TreeNode* p, struct TreeNode* q) {

	int isLeft;
	int isRight;

    if (p != NULL && q == NULL) {
        return 0;
    } else if (p == NULL && q != NULL) {
        return 0;
    } else if (p == NULL && q == NULL){
        return 1;
    }
    
    if (p->val == q->val) {
        isLeft = isSameTree(p->left,q->left);
        isRight = isSameTree(p->right,q->right);
        return isLeft && isRight;
    } 
    
    return 0;
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
    struct TreeNode *node1 = NULL;
    struct TreeNode *node2 = NULL;

    node1 = insert(node1 ,4);
    node1 = insert(node1 ,2);
    node1 = insert(node1 ,7);
    node1 = insert(node1 ,1);
    node1 = insert(node1 ,3);
    node1 = insert(node1 ,6);
    node1 = insert(node1 ,9);

    node2 = insert(node2 ,4);
    node2 = insert(node2 ,2);
    node2 = insert(node2 ,7);
    node2 = insert(node2 ,1);
    node2 = insert(node2 ,3);
    node2 = insert(node2 ,6);
    node2 = insert(node2 ,9);

    printinorder(node1);
    printf("\n");
    printinorder(node2);
    printf("\n");

	printf("%d\n", isSameTree(node1, node2));

    return 0;    
}
