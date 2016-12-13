int maxDepth(struct TreeNode* root) {
    if (!root) 
        return 0;
    int left_height = maxDepth(root->left);
    int right_height = maxDepth(root->right);
    
    if (left_height > right_height) {
        return left_height + 1;
    } 
    else {
        return right_height + 1;
    }
}
