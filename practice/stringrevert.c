#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
/*    char *a;
    char *b;
    int i=0;
    char *c;

    a = "abcd";
    b = a;

    printf("%d",strlen(a));
    for(i=0 ; i < strlen(a); i++) {
        c[strlen(a)-i] = a[i];
    }

    for(i=0 ; i < strlen(c); i++) {
        printf("%c", c[i]);
    }*/

    char str[] = "Hello World"; 
    char *f, *t, c; 
    
    f = str; 
    t = str; 
    
    while (*t) 
        t++; 
    t--; 
    
    while (t > f) { 
        c = *f; 
        *f = *t; 
        *t = c; 
        f++; 
        t--; 
    } 
    puts(str); 

    return 0;
}
