#include<stdio.h>
int main()
{
    int a;
    printf("Enter a 3 digit number:");
    scanf_s("%d",&a);
    int b=(a/100);
    int c=(a%10);
    int d=((a/10)-(b*10));
    int revnum =((c*100)+(d*10)+(b*1));
    printf("The reversed number would be:%d",revnum);
}