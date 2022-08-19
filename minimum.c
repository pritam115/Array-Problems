#include<stdio.h>
#include<limits.h>
int main()
{
    int a[100],n,i, min=INT_MAX;
    printf("Enter how many numbers : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
       for(i=0;i<n;i++)
       {
           if(min>a[i])
            min=a[i];

       }
       printf("Minimum number : %d\n",min);



}

