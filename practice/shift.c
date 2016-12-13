#include <stdio.h>

void bin(int n)
{
 /* step 1 */
 if (n > 1)
     bin(n/2);
 /* step 2 */
 printf("%d", n % 2);
}

int main(int argc, char *argv[]){ 
    int i=1;
    i = i << 5;
    printf ("%x\n", i);

    bin(i);

    return 0;
}
