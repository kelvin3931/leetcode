#include <stdio.h>

int fib(int);

int main() {
    printf("result:%d", fib(6));
    return 0;
}

int fib(int data) {
    if (data <= 1) {
        return data;
    }
    else {
        return (fib(data - 1) + fib(data - 2));
    }
}
