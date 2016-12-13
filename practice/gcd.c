#include <stdio.h>

int gcd(int a, int b) {
    if(b != 0) {
        gcd(b, a % b);
    }
    else {
        return a;
    }
}

int gcd_loop(int a, int b) {
    int tmp;
    while(b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }

    return a;
}

int main() {
    printf("gcd_recurive:%d\n", gcd(54,24));
    printf("gcd_loop:%d\n", gcd_loop(54,24));
}
