#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int findMax() {
    int x[5] = {1,52,31,44,5};

    int max=x[0];
    int i=0;

    int len;
    len = sizeof(x)/sizeof(int);;

    for (i=0;i<len;i++) {
        if (max < x[i]) {
            max = x[i];
        }
    }

    return max;
}

int main() {
    printf("%d\n", findMax());
}
