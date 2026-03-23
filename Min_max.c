#include <stdio.h>
int main()
{
    int a[100],min,max,size;
    printf("Enter the Size of Array \n");
    scanf("%d",&size);
    printf("Enter the Elements of Array \n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<size;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        else  if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("Maximum Number is ~ %d \n",max);
    printf("Minimum Number is ~ %d \n",min);
}