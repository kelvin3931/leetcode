#include <stdio.h>
#include <limits.h>

int reverse(int x) {

    long long result = 0;
    int flag = 0;

    if ( x < 0 ) {
        flag = 1;
        x *= -1;
    }

    while ( x > 0 ) {
        result *= 10;
        result += (x % 10);
        x /= 10;
    }

    if (result > INT_MAX || result < INT_MIN) {
        return 0;
    }

    if (flag == 1) {
        result *= -1;
    }

    return result;
}

int main() {

	printf("%d", reverse(1534236469));

	return 0;
}
