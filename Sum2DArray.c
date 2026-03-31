#include<stdio.h>
int main()
{
    int a[10][10],b[10][10];
    printf("Enter the Elements in Matrix 1 ~\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the Elements in Matrix 2 ~\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Matrix 1 is ~\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix 2 is ~\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
    printf("The New Array is ~ \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",(a[i][j]+b[i][j]));
        }
        printf("\n");
    }
}