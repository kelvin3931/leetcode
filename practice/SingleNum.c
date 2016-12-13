#include <stdio.h>

int singleNumber(int* nums, int numsSize) {
    int index = 0;    
    int i;
    int result = 0;

    for (i=0;i<numsSize;i++) {
        result = result ^ nums[i];
    }

    printf("%c",result);
    return result;
}

int main() {
    int input[]={'2','1','4','7','2','4','1'};
    int num;
    singleNumber(input, 7);
    return 0;
}
