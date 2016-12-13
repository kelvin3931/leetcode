#include <stdio.h>
#include <string.h>

typedef struct listnode {
    int index;
    struct listnode *next;
}node;

void print_linklist(node *str);
void insert(node *str);
void delete(node *str);
//void revert(node *str);
node *revert(node *str);

node a = {5,0};
node b = {4,&a};
node c = {3,&b};
node d = {2,&c};
node e = {1,&d};

node f = {6,0};

int main() {

    node *str;
    str = &e;

//    print_linklist(str);

    insert(str);
    
//    print_linklist(str);

    delete(str);

//    print_linklist(str);

    str = revert(str);
    print_linklist(str);

    return 0;    
}

void print_linklist(node *str) {
    printf("%d ", str->index);
    int i;
    while (str->next != NULL) {
        str = str->next;
        printf("%d ", str->index);
    }   
}

void insert(node *str) {
    node *ptr=&f;
    ptr->next = str->next;
    str->next = ptr;

}

void delete(node *str) {
    str->next = str->next->next;
}

node *revert(node *str) {
    node *temp = NULL;
    node *head = str;
    while (str->next != NULL) {
        head = str->next;
        str->next = temp;
        temp = str;
        str = head;
    }
    head->next = temp;
    return str;
}

//void revert(node *str) {
    
//}
