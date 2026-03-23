#include<stdio.h>
int main()
{
    int a=0,b=1,c,n;
    printf("Enter the number till Where you want the Series to be \n");
    scanf("%d",&n);
    printf("0 1 ");
    int i;
    while(i)
    {
        c =a+b;
        printf("%d ",c);
        a=b;
        b=c;
        if(c==n || c>n)
        {
            break;
        }
    }
}