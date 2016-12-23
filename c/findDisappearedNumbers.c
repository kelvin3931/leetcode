#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {

    int i;
    int index;
    int count=0;
    int *result;
    result = (int *)malloc(numsSize * sizeof(int));

    for( i = 0 ; i < numsSize; i++){
        index=abs(nums[i]);
        nums[index-1]=-abs(nums[index-1]);
    }

    for( i = 0 ; i < numsSize; i++){
        if(nums[i]>0){
            result[count++] = i+1;
            printf("%d ", i + 1);
        }
    }
    printf("\n");

    *returnSize=count;
    return result;
}

int main(int argc, char *argv[]) {
    
    int input[] = {3,11,8,16,4,15,4,17,14,14,6,6,2,8,3,12,15,20,20,5};
    int i;
    int *result = (int*)malloc(sizeof(int));
    findDisappearedNumbers( input, 20, result);

    return 0;
}
