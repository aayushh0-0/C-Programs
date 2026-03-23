#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter first Number \n");
    scanf("%d", &a);
    printf("Enter Second Number \n");
    scanf("%d", &b);
    if (a == b)
    {
        printf("The Entered Numbers Are Equal");
    }
    else
    {
        printf("The Entered number are Not Equal");
    }
}