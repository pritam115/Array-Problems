#include<stdio.h>
int main()
{
    int a[3][3],upperSum=0,lowerSum=0,i,j;
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
            if(i<j)
            {
                upperSum=upperSum+a[i][j];
            }
            if(i>j)
            {
                lowerSum=lowerSum+a[i][j];
            }
            }
}

    printf("\nSum of upper triangle elements = %d ",upperSum);
    printf("\nSum of lower triangle elements = %d ",lowerSum);
}


