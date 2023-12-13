#include<stdio.h>
#include<conio.h>
int main()
{
    int pos=-1,i,j,n,a[100],num;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the number to be searched for:");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {if(num ==a[i])
    {
        pos=i+1;
        printf("Entered number found at %d",pos);

    }  
    }
    if (pos==-1)
    printf("Number not found");
    return 0;
}