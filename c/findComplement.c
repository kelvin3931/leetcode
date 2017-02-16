#include <stdio.h>

int caculate(int input) {

    int output = 1;
    while(input != 0) {
        output = output * 2;
        input--;
    }    

    return output;
}

int findComplement(int num) {
    
    int count;
    int result = 0;
    count = 0;
    while (num >= 1) {
        if ((num % 2) == 0) {
            result = result + caculate(count);
        }
        num = num / 2;
        count++;
    }  

    printf("result:%d\n", result);
    
    return result;
}

int main() {

    findComplement(5);

    return 0;
}
