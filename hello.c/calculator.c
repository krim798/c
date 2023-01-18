#include<stdio.h>
int main()
{
    int a,b;
    int c;
    printf("Enter 2 numbers:");
    scanf("%d%d",&a,&b);
    printf("Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division, 5 for remainder:");
    scanf("%d",&c);
    switch (c)
    {
    case 1: printf("%d",a+b);
            break;
    case 2: printf("%d",a-b);
            break;
    case 3: printf("%d",a*b);
            break;
    case 4: printf("%d",a/b);
            break;
    case 5:printf("%d",a%b);
            break;
    default:
        break;
    }
}