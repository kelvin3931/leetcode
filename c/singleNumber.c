#include <stdio.h>

int singleNumber(int* nums, int numsSize) {
    int result = 0;
    int i;
    for ( i = 0; i<numsSize; i++)
    {
        result ^=nums[i];
    }
    return result;
}

int main(int argc, char *argv[]){

    int nums[] = {1,2,3,4,5,1,2,3,4};

    printf("%d", singleNumber(nums, 9));

    return 0;
}
