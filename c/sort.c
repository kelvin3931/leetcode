#include <stdio.h>
#include <string.h>

void sort(int *arr) {

    int i = 0,j;
	int tmp;
    int len = 0;
/*    while(arr[len] != '\0') {
        printf("%d\n", arr[len]);
		len++;
	}

	printf("%d\n", len);*/
    for(i = 0; i < (len - 1); i++) {
		for(j = 1; j < (len - 1);j++) {
			tmp = arr[j];
			arr[j] = arr[i];
			arr[i] = tmp;
		}
	}

	len = 0;
    while(arr[len] != '\0') {
        printf("%d\n", arr[len]);
		len++;
	}

    return;
}

int main(int argc, char *argv[]) {

    int arr[5]={5,4,3,2,1};
    sort(arr);
    return 0;
}
