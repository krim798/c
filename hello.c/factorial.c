#include<stdio.h>
int main()
{
    int i,n,prod=1;
    printf("Enter n:");
    scanf_s("%d",&n);
    for(i=1;i<=n;i++)
     prod=prod*i;
     printf("Factorial of %d is %d",n,prod);
}