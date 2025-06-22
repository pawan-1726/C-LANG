
/*celcius to ferenhite temprature conversion*/
#include <stdio.h>
int main(){

    float temp;

    printf("enter the temp in celcius");
    scanf("%f",&temp);
    
    temp = (9/5)*temp + 32 ;

    printf("The temprature in fe4renhite is %f ", temp);
}