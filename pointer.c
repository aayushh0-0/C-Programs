#include <stdio.h>
int main()
{
    int *nptr,n;
    printf("Enter the Value of n \n");
    scanf("%d",&n);
    nptr=&n;
    printf("The value of n is = %d \n",*nptr);
    printf("The Address of n is = %d \n",nptr);

    //pointer to pointer Depiction

    int **mptr=&nptr;
    printf("The value of n is = %d \n",**mptr);
    printf("The Address of nested pointer is = %d ",mptr); 
    //isme pointer nptr se linked h theek ab usse kya hota ki value to same rhti h but adress change ho jata h. 
}