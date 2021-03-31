#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

void *func(void *var)
{
    sleep(2);
    printf("-> We are using thread \n");
}

int main()
{
    pthread_t t_id;
    printf("-> Before using threading \n");
    pthread_create(&t_id, NULL , func, NULL);
    pthread_join(t_id,NULL);
    printf("-> After thread: \n");
    exit(0);
}