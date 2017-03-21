#include <stdio.h>
#include <string.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode a = {5,0};
struct ListNode b = {4,&a};
struct ListNode c = {3,&b};
struct ListNode d = {2,&c};
struct ListNode e = {1,&d};

struct ListNode f = {6,0};

struct ListNode *revert(struct ListNode *head) {
    struct ListNode *prev = NULL;
    struct ListNode *next;

	while(head) {
		next = head->next;
		head->next = prev;
        prev=head;
        head=next;
	}

    return prev;
}

void print_linklist(struct ListNode *str) {
    printf("%d ", str->val);
    int i;
    while (str->next != NULL) {
        str = str->next;
        printf("%d ", str->val);
    }
	printf("\n");
}

int main() {

    struct ListNode *str;
    str = &e;

    print_linklist(str);
    str = revert(str);
    print_linklist(str);

    return 0;    
}
