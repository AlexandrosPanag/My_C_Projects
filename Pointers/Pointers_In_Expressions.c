#include<stdio.h>

int main(){
    int x=6;
    int y;
    int *p=NULL;
    p=&x;
    y=*p+2;    //Y becomes 8
    y+=*p;     //Y becomes 14
    *p=y;      //X becomes equal to Y
    (*p)++;    //X becomes 15
    printf("p is pointing to the value %d\n",*p);
}