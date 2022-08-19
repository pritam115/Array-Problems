#include<stdio.h>
#include<limits.h>
int main()
{
    int a[100],n,i, max=INT_MIN;
    printf("Enter how many numbers : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
       for(i=0;i<n;i++)
       {
           if(max<a[i])
            max=a[i];

       }
       printf("Maximum number : %d\n",max);



}
