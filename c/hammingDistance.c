#include <stdio.h>

int hammingDistance(int x, int y) {
    
    int count=0;
    int caculate;

    caculate = x ^ y;

    while (caculate > 0) {
        if (caculate & 1)
            count++;
        caculate = caculate >> 1;
    }

    return count;
}

int main(int argc, char *argv[]) {

    int result;
    result = hammingDistance(1, 4);
    printf("%d\n", result);

    return 0;
}
