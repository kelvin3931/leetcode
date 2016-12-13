#include <stdio.h>

int addDigits(int num) {
    
    while (num > 9) {
        num = (num / 10) + (num % 10);
    }
    
    return num;
}

int main(int argc, char *argv[]) {
    printf("%d\n", addDigits(38));
    return 0;
}
