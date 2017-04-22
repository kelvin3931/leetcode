#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubble_sort(char* arr) {

	int i,j;
	char tmp;
	int len;
	len = strlen(arr);

	for (i = 0; i < (len - 1); i++) {
		for (j = 0; j < (len - i - 1); j++) {
			if (arr[j] > arr[j+1]) {
			    tmp = arr[j+1];
			    arr[j+1] = arr[j];
			    arr[j] = tmp;
			}
		}
	}

	for (i=0; i < len;i++) {
	    printf("%c", arr[i]);
	}

	return ;
}

int main() {

	char arr[] = "45312";
	bubble_sort(arr);
}
