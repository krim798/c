#include<stdio.h>
int main()
{
    int a,b,x;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    if(a==b)
    printf("Both are equal");
    else
    {
        x=a>b?a:b;
        printf("%d is largest",x);
    }
}