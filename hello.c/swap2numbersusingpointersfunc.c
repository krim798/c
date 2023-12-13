#include<stdio.h>
void swapnum(int *, int *);
int main()
{
    int n,m;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter m:");
    scanf("%d",&m);
    swapnum(&n,&m);
    printf("%d,%d",n,m);
    return 0;
}
void swapnum(int *a, int *b)

{
    int t;
    t=*a;
    *a=*b;
    *b=t;

}