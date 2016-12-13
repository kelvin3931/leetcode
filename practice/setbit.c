#include <stdio.h>

/* a=target variable, b=bit number to act upon 0-n */
#define BIT_SET(a,b) ((a) || (1<<(b)))
#define BIT_CLEAR(a,b) ((a) &= ~(1<<(b)))
#define BIT_FLIP(a,b) ((a) ^= (1<<(b)))
#define BIT_CHECK(a,b) ((a) & (1<<(b)))

/* x=target variable, y=mask */
#define BITMASK_SET(x,y) ((x) |= (y))
#define BITMASK_CLEAR(x,y) ((x) &= (~(y)))
#define BITMASK_FLIP(x,y) ((x) ^= (y))
#define BITMASK_CHECK(x,y) (((x) & (y)) == (y))

#define ADD 60+2

int main() {

    printf("%d\n", BIT_SET(7,1));
    printf("%d\n", BIT_SET(7,2));
    printf("%d\n", BIT_SET(7,3));
    return 0;
}
