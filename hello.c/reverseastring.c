#include<stdio.h>
#include <string.h>
int main()
{
char Str[1000], RevStr[1000];
int i, k, len;
printf("\n Please Enter any String :  ");
gets(Str);
k = 0;
len = strlen(Str);
for (i = len - 1; i >= 0; i--)
{
RevStr[k++] = Str[i];
}
RevStr[i]='\0';
puts(RevStr);
}
