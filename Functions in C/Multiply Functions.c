#include<stdio.h>

/*this is a basic function that multiplies two given numbers */

int function(int x,int y); //DECLARING THE FUNCTION

int main(){
    int x,y=0,multiply_result;
    printf("Give the value of X:");
    scanf("%d",&x);
    printf("Give the value of Y:");
    scanf("%d",&y);
    multiply_result=function(x,y); //CALLING THE FUNCTION BY VALUE
    printf("The result of %d * %d is %d \n",x,y,multiply_result); //PRINTING THE X,Y AND THE MULTIPLY RESULT WHICH IS EQUAL TO THE FUNCTION
    return 0;
}

int function(int x,int y){
  x=x*y;                       //THE FUNCTION
  return x;
 }
