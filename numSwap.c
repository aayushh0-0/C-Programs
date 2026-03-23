#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the First Number or the Value of A \n");
    scanf("%d",&a);
    printf("Enter the Second Number or the Value of B \n");
    scanf("%d",&b);
    printf("\n The Value of A is %d",a);
    printf("\n The Value of B is %d",b);
    c=a;
    a=b;
    b=c;
    printf("\n After Swapping");
    printf("\n The Value of A is %d",a);
    printf("\n The Value of B is %d",b);

}