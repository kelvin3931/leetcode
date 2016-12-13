char** fizzBuzz(int n, int* returnSize) {
    char **str;
    int i;
    int m=16;

    str =(char **)malloc(n*sizeof(char *));
    for(i=0;i<n;i++ )
    {
        str[i]=(char *)malloc( m*sizeof(char) );
    }

    for( i = 0; i < n; i++) {
        if (((i+1) % 15) == 0) {
            str[i] = "FizzBuzz";
        }
        else if (((i+1) % 3) == 0) {
            str[i] = "Fizz";
        }
        else if(((i+1) % 5) == 0) {
            str[i] = "Buzz";
        }
        else {
            sprintf(str[i],"%d", i + 1);
        }
    }

    *returnSize=n;
    return str;
}
