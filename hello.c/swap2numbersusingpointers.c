#include<stdio.h>
int main()
{
    int a,b,*x,*y,t;
    
    printf("Enter numbers:");
    scanf("%d%d",&a,&b);
    x=&a; 
    y=&b;
    t = *x;
    *x = *y;
    *y = t;
    printf("Numbers after swapping are %d , %d",*x,*y);
    return 0;
}