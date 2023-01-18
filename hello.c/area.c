#include<stdio.h>
int main()
{
    int a,b,area,perimeter;
    printf("Enter length:\n");
    scanf_s("%d",&a);
    printf("Enter breadth:\n");
    scanf_s("%d",&b);
    area=(a*b);
    printf("Area is: %d\n",area);
    perimeter=2*(a+b);
    printf("Perimeter is:%d",perimeter);
}