#include <stdio.h>

int getSum(int a, int b) {
    return a+b;
}

int main(int argc, char *argv[]) {
    printf("%d", getSum(1,2));
    return 0;
}
