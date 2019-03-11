#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

bool isPalindrome(int x) {
    int ori;
    uint32_t revert, remainder;
    int i;

    if (x == 0) {
        return true;
    } else if(x < 0) {
        return false;
    }

    ori = x;
    revert = 0;
    while(x != 0) {
        remainder = x % 10;
        revert = revert * 10;
        revert = revert + remainder;
        x = x / 10;
    }

    if (ori == revert) {
        return true;
    } 

    return false;
}

int main (int argc, char *argv[]) {
    printf("%d\n", isPalindrome(0));
    return 0;
}
