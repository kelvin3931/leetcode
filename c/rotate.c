#include <stdio.h>

void reverse(int nums[], int begin, int end) {
	int tmp;
	int i;
	if (begin >= end) return;
	for (i = 0; i < (end-begin+1)/2; i++) {
		tmp = nums[begin+i];
		nums[begin+i] = nums[end-i];
		nums[end-i] = tmp;
	}

}

void rotate(int* nums, int numsSize, int k) {
	int i;
    if (nums == NULL || numsSize <= 0 || k <= 0)
        return;
    k %= numsSize;

    reverse(nums, 0, numsSize - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, numsSize - 1);

	for ( i=0; i<numsSize ;i++ ) {
		printf("%d,", nums[i]);
	}

    return;
}

int main() {

	int arr[] = {1,2,3,4,5,6,7};
	rotate(arr, 7, 3);
	return 0;
}
