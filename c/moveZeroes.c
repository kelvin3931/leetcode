#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
	int i, j;
	int tmp;

	int count = 0;

	for( i = 0; i < numsSize; i++) {
		if (nums[i] != 0) {
			nums[count++] = nums[i];
   		}
	}

	while (count < numsSize)
        nums[count++] = 0;

	for( i = 0; i < numsSize; i++) {
		printf("%d, ", nums[i]);
	}
	
	return;
}

int main() {

	int nums[] = {0,1,0,3,12};
	//int nums[] = {0,0,0,0,1};
	moveZeroes(nums, 5);
	return 0;
}
