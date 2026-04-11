#include <stdio.h>

int main()
{
    int n;
    printf("Enter the Size of the Traingle \n");
    scanf("%d",&n);

    for(int i=n;i>0;i--)
    {
        for(int j=n;j>(i-1);j--)
        {
            printf(" ");
        }
        for(int k=1;k<=(2*i-1);k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}