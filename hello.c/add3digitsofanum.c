#include<stdio.h>
int main()
{
    int a;
    printf("Enter a 3 digit number:");
    scanf("%d",&a);
    int b=(a/100);
    int c=(a%10);
    int d=((a/10)-(b*10));
    int sumof3digitsofanumber =(b+c+d);
    printf("The sum of the digits of the given number would be:%d",sumof3digitsofanumber);
}