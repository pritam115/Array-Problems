#include<stdio.h>
int main()
{
    int a[3][4],b[3][4],i,j;
     printf("Enter elements for A matrix :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
           printf("A[%d][%d]= ", i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("A = ");
     for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("\t");
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }

     printf("Enter elements for B matrix :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
           printf("B[%d][%d]= ", i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    printf("B = ");
     for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("\t");
            printf(" %d ",b[i][j]);
        }
        printf("\n");
    }

}
