// Write a program to find area of Circle

#include <stdio.h>
#define PI 3.14

float areaCircle(float radius){
    return PI * radius * radius;
}

int main(){

    float radius;

    printf("Enter the value of the radius");
    scanf("%f", &radius);

    float area = areaCircle(radius);

    printf("The area of circle is %2f", area);

    return 0;

}
