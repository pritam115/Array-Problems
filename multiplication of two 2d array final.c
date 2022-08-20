#include<stdio.h>
int main()
{
    int first[10][10],second[10][10],result[10][10],r1,r2,c1,c2,i,j,k,sum=0;

    printf("Enter the number of row and columns for first matrix : ");
    scanf("%d%d",&r1,&c1);

    printf("Enter the number of row and columns for second matrix : ");
    scanf("%d%d",&r2,&c2);

    while(c1!=r2)
    {
        printf("Error !!\n");
        printf("Enter the number of row and columns for first matrix : ");
        scanf("%d%d",&r1,&c1);
        printf("Enter the number of row and columns for second matrix : ");
        scanf("%d%d",&r2,&c2);
    }

    printf("Enter the elements of first matrix :\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("[%d][%d]= ", i,j);
            scanf("%d",&first[i][j]);
        }
    }
    printf("Enter the elements of second matrix :\n ");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("[%d][%d]=  ", i,j);
            scanf("%d",&second[i][j]);
        }
    }
    printf(" First = ");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%d ", first[i][j]);
        }
        printf("\n");

    }

    printf("Second = ");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ",second[i][j]);
        }
        printf("\n");
}
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum=sum+first[i][k]*second[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }
    printf("Result matrix= \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }

}

