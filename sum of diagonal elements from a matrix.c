#include<stdio.h>
int main()
{
    int a[3][3],sum=0,i,j;
    printf("Enter the elements of A matrix :\n ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("A[%d][%d] =  ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("A matrix : \n ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("\t");
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i==j)
            {
                printf("%d ",a[i][j]);
                sum=sum+a[i][j];
            }
        }
    }
    printf("\nSum of diagonal numbers = %d ",sum);
}
