#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

void insert_tree(struct TreeNode **, int);
void DFS(struct TreeNode *head);

void insert_tree(struct TreeNode **node, int num) {
    struct TreeNode *temp = *node, *prev = *node;    
    if (*node == NULL)
    {
        *node = (struct TreeNode *)malloc(sizeof(struct TreeNode));
        (*node)->val = num;
        (*node)->left = (*node)->right = NULL;
    }
    else
    {
        while (temp != NULL)
        {
            if (num > temp->val)
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
        temp = (struct TreeNode *)malloc(sizeof(struct TreeNode));
        temp->val = num;
        if (num >= prev->val)
        {
            prev->right = temp;
        }
        else
        {
            prev->left = temp;
        }
    }
}

//int inorder(struct TreeNode* root) {
//
//	if (root->left != NULL) {
//		result[i++] = inorder(root->left);
//	}
//
//	result[i++] = root->val;
//	
//	if (root->right != NULL) {
//		result[i++] = inorder(root->right);
//	}
//
//	return root->val;
//}

int i = 0;
int* inorderTraversal(struct TreeNode* root, int* returnSize) {

	returnSize = malloc(sizeof(int*));

	if (root == NULL) {
		return NULL;
	}

	if (root->left) {
		inorderTraversal(root->left, returnSize);
	}

	returnSize[i] = root->val;
//	printf("%d, ", root->val);
	printf("%d, ", returnSize[i]);
	i++;

	if (root->right) {
		inorderTraversal(root->right, returnSize);
	}

	return returnSize;
}

void DFS(struct TreeNode *head)
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
        printf("%d  ", head->val);
    }
}
 
int main() {
    struct TreeNode *head = NULL;

	int size = 3;
	int *ptr;

	ptr = &size;

    insert_tree(&head, 2);
    insert_tree(&head, 1);
    insert_tree(&head, 3);

	int *returnSize;

	inorderTraversal(head, returnSize);

//	int *re = inorderTraversal(head, returnSize);
//	int i;
//	for (i = 0; i < 3; i++) {
//	    printf("%d", re[i]);
//	}

    //DFS(head);
    return 0;
}
