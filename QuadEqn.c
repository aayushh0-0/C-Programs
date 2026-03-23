#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,r1,r2;
    printf("\nEnter the Coefficient of x^2\n");
    scanf("%f",&a);
    printf("\nEnter the Coefficient of x\n");
    scanf("%f",&b);
    printf("\nEnter the Constant\n");
    scanf("%f",&c);
    r1=-(b+sqrt((b*b)-(4*a*c)))/(2*a);
    r2=-(b-sqrt((b*b)-(4*a*c)))/(2*a);
    printf("\nFirst root is %f",r1);
    printf("\nSecond root is %f",r2);
}
