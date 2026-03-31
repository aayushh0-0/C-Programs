#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Size of the Triangle\n");
    scanf("%d",&n);
    int temp =n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            for(int k=1;k<=(temp);k++)
            {
                printf(" ");
            }
            temp--;
            printf("*");
        }
        printf("\n");
    }
}