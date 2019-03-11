#include <stdio.h>
#include <stdlib.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 **/

struct ListNode {
	int val;
	struct ListNode *next;
};

struct ListNode a = {3,0};
struct ListNode b = {4,&a};
struct ListNode c = {2,&b};

struct ListNode d = {4,0};
struct ListNode e = {6,&d};
struct ListNode f = {5,&e};

void print_linklist(struct ListNode *str) {
    printf("%d ", str->val);
    int i;
    while (str->next != NULL) {
        str = str->next;
        printf("%d ", str->val);
    }
    printf("\n");
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *result;
    
    result = (struct ListNode*)malloc(sizeof(struct ListNode));
    
//    while (l1->next != NULL) {
        result->val = l1->val + l2->val;
        result = result->next;
        l1 = l1->next;
        l2 = l2->next;
        printf("result->val:%d", result->val);
//    }
    
//    printf("%d", result->val);
    
    return 0;
}

int main() {

    struct ListNode l1 = {2, &a};
    struct ListNode l2;

    struct ListNode *str1;
    struct ListNode *str2;

    str1 = &c;
	str2 = &f;

	print_linklist(str1);
	print_linklist(str2);

    addTwoNumbers(str1, str2);

	return 0;
}
