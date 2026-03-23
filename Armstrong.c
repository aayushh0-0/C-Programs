#include <stdio.h>
#include <math.h>
int main()
{
    int a,n,sum=0,temp,count=0;
    printf("Enter a Number \n");
    scanf("%d",&a);
    n=a;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    n=a;
    while(n>0)
    {
        temp = n%10;
        sum = sum+pow(temp,count);
        n=n/10;
    }
    if(a==sum)
    {
        printf("Number is Armstrong Number ");
    }
    else
    {
         printf("Number is not Armstrong Number");
    }
}