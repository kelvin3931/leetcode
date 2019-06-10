#include <stdio.h>
#include <string.h>

int romanToInt(char *s) {

    int len, i, total;
    len = strlen(s);

    total = 0;

    for (i=0;i<len;i++) {
        switch (s[i]) {
            case 'I':
                if (s[i+1] == 'V') {
                    total += 4;
                    i++;
                } else if (s[i+1] == 'X') {
                    total += 9;
                    i++;
                } else {
                    total += 1;
                }
                break;
            case 'V':
                total += 5;
                break;
            case 'X':
                if (s[i+1] == 'L') {
                    total += 40;
                    i++;
                } else if (s[i+1] == 'C') {
                    total += 90;
                    i++;
                } else {
                    total += 10;
                }
                break;
            case 'L':
                total += 50;
                break;
            case 'C':
                if (s[i+1] == 'D') {
                    total += 400;
                    i++;
                } else if (s[i+1] == 'M') {
                    total += 900;
                    i++;
                } else {
                    total += 100;
                }
                break;
            case 'D':
                total += 500;
                break;
            case 'M':
                total += 1000;
                break;
        }
    }

    return total;
}

int main(int argc, char *argv[]) {
    printf("%d", romanToInt("MCMXCIV"));
    return 0;
}
