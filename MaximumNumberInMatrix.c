#include<stdio.h>
int main()
{
    int a[10][10];
    int n,max=0;
    int min=a[0][0];
    printf("Enter the Size of Array\n");
    scanf("%d",&n);
    printf("Enter the number in Array\n");
    a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The Matrix is ~ \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
            }
            else if(a[i][j]<min)
            {
                min=a[i][j];
            }
        }
    }
    printf("Maximum Value is ~ %d\n",max);
    printf("Minimum Value is ~ %d\n",min);

}