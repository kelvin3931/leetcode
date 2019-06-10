#include <stdio.h>
#include <stdint.h>

int mySqrt(int x){

	int output;
	int64_t i;

	if (x <= 1) {
		return x;
	}

	for(i=1;i<=x;i++) {
		if(i*i > x) {
			output = i-1;
			return output;
		}
	}
    
	return output;
}

int main() {
	printf("%d", mySqrt(2));
}
