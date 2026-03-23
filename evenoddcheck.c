#include <stdio.h>
int main()
{
    int a;
    printf("Enter a Number to Check Whether it is EVEN or ODD \n");
    scanf("%d",&a);
    if((a%2)==0)
    {
        printf("The Number is EVEN");
    }
    else
    {
        printf("The Number is ODD");
    }
}