#include <stdio.h>

int caculate(int);

int main() {
    volatile int a = 4;
    a = a+1;
    int result = caculate(3);
    printf("%d", result);
    return 0;
}

//** 1*2+2*3+.....+(n-1)*n **//
int caculate(int n) {
    int i;
    int total = 0;
    for (i=2;i<=n;i++) {
        total += (i-1) * i;
    }
    return total;
}
