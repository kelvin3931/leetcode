#include <stdio.h>

typedef struct listnode{
    struct listnode *next_ptr;
    int a;
}node;

node *link_list_reverse(node*);

int main() {

    node a = { 0 , 4 };
    node b = { &a , 1};
    node c = { &b , 2};
    node d = { &c , 5};
    node test_data = { &d, 9};

    node *str = &test_data;

    str = link_list_reverse(str);
    printf("%d\n", str->a);

    str = str->next_ptr;

    printf("%d\n", str->a);

    return 0;
}


node *link_list_reverse(node *str) {
    node *ptr=str;
    node *tmp=NULL;

    while(ptr->next_ptr!=NULL)
    {
        str=ptr->next_ptr;
        ptr->next_ptr=tmp;
        tmp=ptr;
        ptr=str;
    }
    ptr->next_ptr=tmp; 

    return str;
}
