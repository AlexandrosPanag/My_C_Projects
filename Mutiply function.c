#include<stdio.h>


int function(int x,int y); //DECLARING THE FUNCTION

int main(){
    int x,y,multiply_result;
    x=10;
    y=10;
    multiply_result=function(x,y); //CALLING THE FUNCTION BY VALUE
    printf("The result of %d * %d is %d \n",x,y,multiply_result); //PRINTING THE X,Y AND THE MULTIPLY RESULT WHICH IS EQUAL TO THE FUNCTION
    return 0;
}

int function(int x,int y){
  x=x*y;                       //THE FUNCTION
  return x;
 }

