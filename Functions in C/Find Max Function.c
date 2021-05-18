#include <stdio.h>

/* this function illustates how to find from two input numbers which one is bigger than the other */
/* function declaration */
int max(int num1, int num2);
 
int main () {

   /* local variable definition */
   int a,b;
   printf("This is a simple program to create a function and call it in C\n");
   printf("\n>Give the first value: ");
   scanf("%d",&a);
   printf("\n>Give the second value: ");
   scanf("%d",&b);
   int ret;
 
   /* calling a function to get max value */
   ret = max(a, b);
 
   printf( "Max value is : %d\n", ret );
 
   return 0;
}
 
/* function returning the max between two numbers */
int max(int num1, int num2) {

   /* local variable declaration */
   int result;
 
   if (num1 > num2){
      result = num1;
   }
   else if(num1<num2){
      result = num2;
   }
   else
   {
      printf("Equal Value");
   }
   return result; 
}
