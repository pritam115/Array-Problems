#include<stdio.h>
int main()
{
    int a[10][10],transpose[10][10],i,j,row,col;
    printf("Enter the number of rows and columns :");
    scanf("%d%d",&row,&col);

    printf("Enter the elements of A matrix :\n ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("A[%d][%d] =  ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("A matrix : \n ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
          printf("\t");
           printf(" %d ",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            transpose[j][i]=a[i][j];
        }
    }

    printf("Transpose Matrix :\n ");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("\t");
           printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }

}
