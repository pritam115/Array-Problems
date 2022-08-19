#include<stdio.h>
int main()
{
    int a[]={10,20,25,31,25}, value,i,pos=-1;
    printf("Which value you want to find : ");
    scanf("%d",&value);

    for(i=0;i<6;i++)
    {
        if(value==a[i])
        {
            pos=i+1;
        break;
        }

    }
    if(pos==-1)
        printf("Item not found");
    else
        printf(" %d is found at %d position", value,pos);

}
