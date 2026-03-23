#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter a \n");
    scanf("%d",&a);
    printf("Enter b \n");
    scanf("%d",&b);
    a=(a+b)-(b=a);
    printf("a is %d \n",a);
    printf("b is %d \n",b);
}