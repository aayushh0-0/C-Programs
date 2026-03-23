#include <stdio.h>
int main()
{
    int a[100],n,size,flag=0,k;
    printf("Enter the Size of Array \n");
    scanf("%d",&size);
    printf("Enter the Elements in Array \n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the Number to be Searched \n");
    scanf("%d",&n);
    for(int i=0;i<size;i++)
    {
        if(a[i]==n)
        {
            flag=1;
            k=i;
            break;
        }
    }
    if(flag==1)
    {
        printf("Number Found at position a[%d]",k);
    }
    else
    {
        printf("Number not Found ");
    }
    
}