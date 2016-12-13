#include <stdio.h>

struct TreeNode {
     int val;
     struct TreeNode *left;
     struct TreeNode *right;
};

int maxDepth(struct TreeNode* root) {
    int depth=0;

    if (root->left != NULL) {
        maxDepth(root->left);
    }
    else if (root->right != NULL) {
        maxDepth(root->right);
    }
    depth++;

    return depth;    
}

int main() {
    struct TreeNode t1;
    
    maxDepth();
    return 0;
}
