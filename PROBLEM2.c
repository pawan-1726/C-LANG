/*calculate the area of the circle and modify it to calculate
the volume of cylinder given its radius and hight*/

#include <stdio.h>
int main()
{
    float pi = 3.14;
    float radius, area, volume;
    printf("eneter the radius of the circle: ");
    scanf("%f", &radius);
    area = pi * radius * radius;
    printf("area of the circle is: %f\n", area);
    float height;
    printf("enter the height of the cylinder: ");
    scanf("%f", &height);
    volume = area * height;
    printf("volume of the cylinder is: %f\n", volume);

    printf("if the same radius sphear has volume of %f \n ", (4 / 3) * pi * radius);
    return 0;
}