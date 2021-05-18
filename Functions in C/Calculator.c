/* this build illustrates how a calculator works in c */


#include <stdio.h>
#include <math.h>


int main(){
    int menu=0;  //menu value
    double a=0;  //first input value
    double b=0;  //second input value
    double sum=0; //result value
    while(menu==0){
    printf("Welcome to my calculator program!\n->Press 1 for addition\n->Press 2 for subtraction\n->Press 3 for multiplication\n->Press 4 for division\n->Press 5 for modulo\n\n\n>");
    scanf("%d",&menu);
    printf("Enter two values: ");
    scanf("%lf %lf", &a, &b);
    if(menu==1){
       sum=a+b;
       printf("->The result is %.1f:",sum);
    }
    else if(menu==2){
        sum=a-b;
        printf("->The result is %.1f:",sum); 
    }
    else if(menu==3){
        sum=a*b;
        printf("->The result is %.1f:",sum);
    }
    else if(menu==4){
        sum=a/b;
        printf("->The result is %.1f:",sum);
    }
    else if(menu==5){
        float sum = remainder(a, b);
        printf("->The result is %.1f\n", sum);
    }
    menu=0;
    printf("\n\n-> Would you like to do another operation? Press 0 to repeat the process or any button for exit.\n\n");
    scanf("%d",&menu);
    if(menu==0){
    double a=0; 
    double b=0;  
    double sum=0;
    } 
  }
}
