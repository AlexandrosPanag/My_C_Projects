#include <pthread.h> //including the pthread library --check compiler settings /OS settings if the pthread library is not recognised
#include <stdio.h>


#define N 10000

int arrayofthreads[2];


//we break the thread process into two functions
//first thread function
void *work1(void *id){
int sum=0;
for(int i=0; i<=N/2; i++){
   sum+=i;
}
printf("Process %s computes sum = %d/n", (char*)id,sum);
arrayofthreads[0]=sum;
return NULL;
}

//second thread function
void *work2(void *id){
int sum=0;
for(int i=N/2+1; i<=N; i++){
   sum+=i;
}
printf("Process %s computes sum = %d/n", (char*)id,sum);
arrayofthreads[1]=sum;
return NULL;
}


int main(){
    GET_TIME(start);
    int sum=0;
    for(int i = 0; i <= N ; i++){
        sum+=i;
    }
    GET_TIME (finish);
    printf("The result is: ",sum"/n");
    printf("Time elapsed: %e\n",elapsed);
    printf("----------------------USING PTHREADS------------------------------------/n");
    GET_TIME(start);
    int sum=0;
    pthread_t t1,t2; //declaring two threads as pthread type
    pthread_create(&t1, NULL, work1, (void *)"A"); //creating the first thread 
    pthread_create(&t2, NULL, work2, (void *)"B"); //creating the second thread
    //both &t1,&t2 are actually pointers along with , NULL, 
    //(void *)A&B is what we send to the functions A and B are for seperating the indentification between the threads

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    GET_TIME (finish);
     printf("%d/n", arrayofthreads[0]+arrayofthreads[1]);
     printf("Time elapsed: %e\n",elapsed);
}