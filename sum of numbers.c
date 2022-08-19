#include<stdio.h>
int main()
{
    int a[10],i,n,sum=0;
    printf("How many numbers ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
     {
         sum=sum+a[i];
     }
     printf("Sum = %d\n",sum);
     printf("Avarage = %.2f",(float)sum/n);


}
