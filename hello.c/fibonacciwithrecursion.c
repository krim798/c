#include<stdio.h>
int fib(int);
int main()
{
 int i,n;
 printf("Enter number of terms:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {printf("%d ,",fib(i));}
 return 0;
}
int fib(int x)
{
if(x<=1)
   {return x;}
else
   return fib(x-1)+fib(x-2);
}