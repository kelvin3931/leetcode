#include <stdio.h>
#include <string.h>

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {

    int i,j;
    int count = 0;
    int temp[100];

    for ( i = 0; i < nums1Size; i++) {
        for ( j = 0; j < nums2Size; j++) {
            if (nums1[i] & nums2[j]) {
                temp[count++] = nums1[i];
                printf("i = %d j = %d\n", i, j);
                printf("%d\n", nums1[i]);
            }
        }
    }

    for ( i = 0; i < nums1Size; i++) {
        for (count = 0 ; count < nums1Size; count++) {
            if (temp[i] != returnSize[count]) {
                
            }
        }
    }

    for ( i = 0; i < nums1Size; i++) {
        printf("%d\n", returnSize[i]);
    }
    
    return returnSize;
}

int main() {

    int numA[] = {1,2,2,1};
    int numB[] = {2,2};

    int returnSize[100];

    intersection(numA, 4, numB, 2, returnSize);

    return 0;
}
