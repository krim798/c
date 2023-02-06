#include<stdio.h>
int main()
{
    int i,j,matrix[3][3],transpose[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter matrix[%d][%d]:",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Entered matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        {transpose[j][i]=matrix[i][j];
        }   
}
printf("Transpose of the entered matrix is:\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++)
    {
        printf(" %d\t",transpose[i][j]);
    }
    printf("\n");
}
return 0;
}
