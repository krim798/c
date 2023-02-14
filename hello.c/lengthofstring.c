#include<stdio.h>
#include<conio.h>
#include<string.h>
int len(char a[])
{
    return strlen(a);
}
int main(){
    char s[100];
    printf("Enter a string:\t");
    gets(s);
    printf("The length of the string is:\t%d",len(s));
    return 0;
}
