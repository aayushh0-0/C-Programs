#include <stdio.h>
int main()
{
    int a[100],temp,size;
    printf("Enter the Size of Array \n");
    scanf("%d",&size);
    printf("Enter the Elelments \n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<(size-1);i++)
    {
        for(int j=0;j<(size-i-1);j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("The Sorted Array is \n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
}
