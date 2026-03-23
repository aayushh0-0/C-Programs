#include <stdio.h>
#include <math.h>
#define PI 3.14
int main()
{
    float r,h,area;
    printf("\nEnter the Radius of the Cylinder \n");
    scanf("%f",&r);
    printf("\nEnter the Height of the Cylinder \n");
    scanf("%f",&h);
    area= 2*PI*r*(r+h);
    printf("\nArea of the Cylinder is %f",area); 
}