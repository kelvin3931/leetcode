#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* convertToBase7(int num) {
    char *result;
    int i=0, j;
	char tmp;
    result = (char *)malloc(100);
    char *minus;

    if(num == 0) {
        return "0";
	}

	if(num < 0) {
		num = 0 - num;
		minus = "-";
	}

    while(num > 0) {
        result[i] = (num % 7) + '0';
        num = num / 7;
        i++;
    }

	for(j = 0; j < (i/2); j++) {
		tmp = result[j];
		result[j] = result[i-1];
		result[i-1] = tmp;
	}

    char *str1;
    char *str2;
    str1 = (char *)malloc(100);
    str2 = (char *)malloc(100);
    strcpy(str1, "sssss");
    strcpy(str2, "kkkk");
    strcat(str1, str2);
    printf("%s", str1);

    return result;
}

int main() {
	printf("%s", convertToBase7(-343));
	return 0;
}
