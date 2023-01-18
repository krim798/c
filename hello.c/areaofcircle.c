#include<stdio.h>
int main()
{
    float a,b=3.14,area,perimeter;
    printf("Enter radius:\n");
    scanf_s("%f",&a);
    area=(b*a*a);
    printf("Area is: %f\n",area);
    perimeter=2*b*a;
    printf("Perimeter is:%f",perimeter);
    return 0;
}