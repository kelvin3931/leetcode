#include <stdio.h>
#include <stdlib.h>

int countPrimes(int n) {
    int *isPrime = malloc(sizeof(int) * n);
    int i;
    int j;
    for(i = 2; i < n; i++){
        isPrime[i] = 1;
    }

    for(i = 2; i*i < n; i++){
        if (!isPrime[i])
            continue;
        for(j = i * i; j < n; j += i){
            isPrime[j] = 0;
       }
    }
    int count = 0;
    for (i = 2; i < n; i++) {
        if (isPrime[i]) 
           count++;
    }
    return count;
}

int main() {
    
    printf("%d", countPrimes(7));
    return 0;
}
