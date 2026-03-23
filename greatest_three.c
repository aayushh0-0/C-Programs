#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the First Number \n");
    scanf("%d",&a);
    printf("Enter the Second Number \n");
    scanf("%d",&b);
    printf("Enter the Third Number \n");
    scanf("%d",&c);
    if (a > b && a > c)
    {
        printf("Greatest Number is %d", a);
    }
    else if (b > a && b > c)
    {
        printf("Greatest Number is %d", b);
    }
    else
    {
        printf("Greatest Number is8 %d", c);
    }
}
