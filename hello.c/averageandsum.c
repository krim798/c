#include<stdio.h>
int main()
{
    float m1,m2,m3,m4,m5,sum,avg;
    printf("Enter marks of 1st subject:\n");
    scanf("%f",&m1);
    printf("Enter marks of 2nd subject:\n");
    scanf("%f",&m2);
    printf("Enter marks of 3rd subject:\n");
    scanf("%f",&m3);
    printf("Enter marks of 4th subject:\n");
    scanf("%f",&m4);
    printf("Enter marks of 5th subjects:\n");
    scanf("%f",&m5);
    sum=m1+m2+m3+m4+m5;
    printf("Total marks are:%f",sum);
    avg=sum/5;
    printf("The aveage is :%f",avg);
}