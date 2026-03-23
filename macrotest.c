#include <stdio.h>
#define Large(a,b,d) (a>b)?((a>d)? (a):(d)):((b>d)?(b):(d))
int main()
{
    int a,b,c,d;
    printf("Enter the Number \n");
    scanf("%d",&a);
    printf("Enter the Number \n");
    scanf("%d",&b);
    printf("Enter the Number \n");
    scanf("%d",&d);
    c=Large(a,b,d);
    printf("Lagest is : %d",c);
    return 0;
}
