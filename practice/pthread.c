#include <stdio.h>
#include <pthread.h>

void *runner(void *param);

int sum;

int main(int argc, char *argv[]) {
    pthread_t tid;
    pthread_attr_t attr;
    pthread_attr_init(&attr);
    pthread_create(&tid,&attr,runner,argv[1]);
    pthread_join(tid,NULL);
    printf("sum=%d\n",sum);

    return 0;
}

void *runner(void *param){
    int i, upper= atoi(param);
    sum=0;
    if(upper>0){
        for(i=1;i<=upper;i++)
            sum+=i;
    }
    pthread_exit(0);
}
