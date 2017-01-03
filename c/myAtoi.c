#include <stdio.h>
#include <stdlib.h>

#define INT_MAX 2147483647
#define INT_MIN -2147483648

int myAtoi(char* str) {

    str = "-1";

    int sign = 1, base = 0, i = 0;
    while (str[i] == ' ') {
         i++; 
    }

    if (str[i] == '-' || str[i] == '+') {
        sign = 1 - 2 * (str[i++] == '-'); 
    }


    while (str[i] >= '0' && str[i] <= '9') {
        if (base >  INT_MAX / 10 || (base == INT_MAX / 10 && str[i] - '0' > 7)) {
            if (sign == 1) 
                return INT_MAX;
            else 
                return INT_MIN;
        }
        base  = 10 * base + (str[i++] - '0');
    }

    return base * sign;
}

int main() {
    
    char *s;

    printf("%d", myAtoi(s));

    return 0;
}
