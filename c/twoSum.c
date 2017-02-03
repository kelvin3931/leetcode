#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target) {
    int i,j;
    int sum;
    int *ans;

    ans = malloc(sizeof(int *));

    for (i = 0; i < numsSize; i++) {
        for (j = 0; j < numsSize; j++) {
            sum = nums[i] + nums[j];
            if (target == sum && i != j) {
                printf("i=%d,j=%d\n",i,j);
                *ans = i;
                *(ans+1) = j;
                return ans;
            }
        }
    }

    return NULL;
}

int main() {

    int arr[] = {3, 2, 4};

    twoSum(arr, 3, 6);

    return 0;
}
