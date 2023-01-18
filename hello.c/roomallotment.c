#include<stdio.h>
int main()
{
    int a;
    printf("Enter 111 for AI-ML, 202 for AI-DS, 332 for CSE ,408 for IT.");
    scanf_s("%d",&a);
    if(a==111)
    printf("Your alloted room is 234.");
    else if (a==202)
    printf("Your alloted room is 345.");
    else if(a==332)
    printf("Your alloted room is 456.");
    else if(a==408)
    printf("Your alloted room is 567.");
    else 
    printf("Enter an eligible code!!");
}