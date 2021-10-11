//can be compiled using gcc -g-Wall -o Parallel_Hello_World Parallel_Hello_World.c -Ipthread
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>


int thread_count; //global variable all programs can use this variable

void *Hello(void* rank) //thread function
int main(){

long thread; //thread declaration - long is for 64 bit systems
pthread_t* thread_handles;

thread_count=strtol(arg[1],NULL, 10);
thread_handles = malloc(thread_count*sizeof(pthread_t));
for(thread = 0; thread<thread_count; thread++){
    pthread_create(&thread_handles[thread],NULL,Hello, (void*) thread);
}
printf("Greetings from the main thread /n");

for(thread=0; thread<thread_count; thread++){
    pthread_join(thread_handles[thread], NULL,Hello, (void*)thread); //for every thread we need 1,2,3 threads
}
    free (thread_handles); //free the memory that we needed (optional since we use mulloc)
    return 0;
}

void* Hello (void *rank){
    long my_rank = (long)rank;
    printf("Greetings from thread %1d out of %d /n",my_rank, thread_count);
    return NULL;
}