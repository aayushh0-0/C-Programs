#include <stdio.h>
int main()
{
    int a[100];
    int n;
    printf("Enter the Array Size\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
            
        }
        int temp = a[i];
            a[i]=a[min];
            a[min]=temp;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}