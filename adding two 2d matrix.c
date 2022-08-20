#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,m,n;
    printf("Enter the numbers of rows and columns : ");
    scanf("%d%d",&m,&n);

     printf("Enter elements for A matrix :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("A[%d][%d]= ", i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }


     printf("Enter elements for B matrix :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("B[%d][%d]= ", i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    printf("A = ");
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t");
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }

    printf("B = ");
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t");
            printf(" %d ",b[i][j]);
        }
        printf("\n");
    }

     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
       c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("C = ");
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           printf(" %d ",c[i][j]);
        }
        printf("\n");
         printf("\t");
    }

}

