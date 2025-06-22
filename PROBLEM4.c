// calculate simple intrest.

#include<stdio.h>
int main(){

    float principle, inrate , span;

    printf("enetr principle amount and the rate of inmterest also \n the span fo the loan");
 scanf(" %f %f %f",&principle ,&inrate ,&span);

 printf("the simple interest is %f" ,  (principle * inrate * span )/100);
 return 0;

}