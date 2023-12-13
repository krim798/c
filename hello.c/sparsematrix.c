#include<stdio.h>
void main()
{
    int matrix[10][10];
    int i,j,m,n;
    int sparse_counter=0;
    printf("Enter the order of matrix:\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<m;++i)
    {
        for(j=0;j<n;++j)
        {
            scanf("%d",&matrix[i][j]);
            if(matrix[i][j]==0)
            {
                ++sparse_counter;
            }
        }
    }
    if(sparse_counter>(m*n)/2){
        printf("The given matrix is sparse matrix!!");
    }
    else{
        printf("The given matrix is not a sparse matrix\n");
    }
    printf("There are %d no. of zeroes",sparse_counter);
    }