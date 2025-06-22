//program to calculate the area of rAectangle via input from user

#include <stdio.h>

int main() {

    int length , width;
    printf("enter length of rectangle: \n");
    scanf("%d", &length);

    printf("enter widrth of the rectangle : \n");
    scanf("%d", &width);

    printf("area of rectangle is %d", length * width);
    return 0; 

}