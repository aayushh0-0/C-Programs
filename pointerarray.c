#include <stdio.h>
int main()
{
    int a[10],n,*aptr;
    aptr=&a;
    printf("Enter the number of Elements");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    printf("The Array is \n");
    for(int i=0;i<n;i++)
    {
        printf("Value is %d at Address %d \n",*(a+i),a+i);
    }
} 