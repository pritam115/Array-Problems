#include<stdio.h>
int main()
{
    int array1[50],array2[60],i,n;
    printf("How many numbers : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&array1[i]);
    }
    printf("Array1\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",array1[i]);
    }
    for(i=0; i<n; i++)
    {
        array2[i]=array1[i];
    }
    printf("\nArray2\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",array2[i]);
    }
}
