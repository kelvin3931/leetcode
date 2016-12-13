#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target) {
    int i,j,sum;
    int ansArr[1];
    int *ans;
    ans = ansArr;

    if ((nums == NULL)|(numsSize < 2))
    {
        return NULL;
    }

    for (i=0;i<numsSize;i++) {
        for (j=0;j<numsSize;j++) {
            sum = nums[i] + nums[j];
            if (target == sum) {
                ansArr[0] = i;
                ansArr[1] = j;
                printf("ans:%d", *ans);
                printf("ans:%d", *(ans+1));
                return ans;
            }
        }
    }

//    if ((nums == NULL)|(numsSize < 2))
//    {
//        return NULL;
//    }
//    int index1;
//    int index2;
//    int* ret = (int*)malloc(sizeof(int)*2);
//    if (NULL == ret)
//    {
//        printf("memory allocation for ret failed!\n");
//        return NULL;
//    }
//    for (index1 = 0; index1 < numsSize; ++index1)
//    {
//        for (index2 = index1 + 1; index2 < numsSize; ++index2)
//        {
//            int sum_tmp = nums[index1] + nums[index2];
//            if (sum_tmp == target)
//            {
//                ret[0] = index1 + 1;
//                ret[1] = index2 + 1;
//                return ret;
//            }
//        }
//    }
//    return NULL;

}

int main() {
    int *result;
    int *nums;
    int valueArr[] = {2, 7, 11, 15};
    nums = valueArr;
    int target = 22;    
    result = twoSum(nums, sizeof(valueArr) / sizeof(int), target);
    printf("ans1:%d", *result); 
    printf("ans2:%d", *(result+1)); 
    return 0;
}
