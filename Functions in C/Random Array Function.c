
/* this is a function that generates 5 numbers , then stores them in an array and finally prints the array's elements */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generate(){
   int x;
   x = rand() % 101;
   return x;
}

int main(){
    int A[5];
    int x;
    printf("This srand method generates 5 numbers randomly up to the number of 100 randomly and then stores them in an array!\n");
    srand(time(0));
    for(int i=0; i<5;i++){
        x=generate();
        A[i]=x;
    }
    for(int i=0; i <5;i++){
        printf("%d\n",A[i]);
    }
    return 0;
}