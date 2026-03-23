#include <stdio.h>
int main()
{
    int a[100],size,n,flag=0;
    printf("Enter the Size of Array \n");
    scanf("%d",&size);
    printf("Enter the Elements of Array \n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf(" Array is \n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("Enter the Number to be Searched \n");
    scanf("%d",&n);
    int u=0;
    int l=size-1;
    
    while(u<=l)
    {
        int mid = (u+l)/2;
        if(a[mid]==n)
        {
            flag=1;
            printf("Number Found, At a[%d] ",mid);
            break;
        }
        else if(a[mid]>n)
        {
            l=mid-1;
        }
        else
        {
            u=mid+1;
        }
    }
    if(flag==0)
    {
        printf("Number Not Found...");
    }
}