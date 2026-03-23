#include <stdio.h>

int main()
{
    int a;
    printf("Enter a year\n");
    scanf("%d", &a);

    if (a % 4 == 0)
    {
        if (a % 100 == 0)
        {
            if (a % 400 == 0)
                printf("The entered year is a Leap Year");
            else
                printf("The entered year is NOT a Leap Year");
        }
        else
            printf("The entered year is a Leap Year");
    }
    else
        printf("The entered year is NOT a Leap Year");

    return 0;
}