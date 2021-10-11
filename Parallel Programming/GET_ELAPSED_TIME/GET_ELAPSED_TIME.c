#include"timer.h"
#include<stdio.h>

int main(){
    double start, finish, elapsed;

    GET_TIME(start);
    GET_TIME (finish);
    printf("Time elapsed: %e\n",elapsed);
}