#include <stdio.h>

#define MAX_VALUE 10
#define fib(x) ((x) > 10 ? 20 : ((x) * 2))

void swap(int *, int *);
void swap1(int , int );

int main(int argc, char *argv[]) {
    int i;

    char arr[10]="1234567890";
    char *ptr;

    char *array[5];

    ptr = arr;

    int *pt,*str;
    int a=10,b=20;

    pt = &a;
//    str = &b;

    printf("%p\n", &a);
    printf("%p\n", pt);

    printf("a=%d\n", a);
    printf("b=%d\n", b);

    swap(&a, &b);
    //swap1(a, b);

    printf("a=%d\n", a);
    printf("b=%d\n", b);

    printf("%c", (*ptr)+1);

    i = fib(2);
    printf("%d", i);

    return 0;
}

void swap(int *a, int *b) {
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

//void swap1(int &a, int &b) {
//    int tmp;
//
//    tmp = a;
//    a = b;
//    b = tmp;
//}
