#include <stdio.h>

#include <string.h>

int main(){

    char str[1000];  

    int l,n,comp=0; 

    printf("Enter the string to check : ");

    gets(str);

    n=strlen(str); 

    for(l=0;l<n/2;l++){

     if(str[l]==str[n-l-1])

     comp++;

  }

  if(comp==l)

      printf("The entered string is a palindrome");

    else

        printf("The entered string is not a palindrome");

    return 0;

}