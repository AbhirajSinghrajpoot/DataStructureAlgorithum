#include<stdio.h>
int main()
{
    int a[10],i,t,j;
    for(i=0;i<10;i++)
    {
        printf("enter the value : ");
        scanf("%d",&a[i]);
    }
    printf("\n original array is : ");
    for(i=0;i<10;i++)
        printf("\n %d",a[i]);
    i=0;
    j=9;
    while (i<=j)
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
        i++;
        j--;
    }
    printf("\n updated array is: ");
    for(i=0;i<10;i++)
        printf("\n%d",a[i]);
    return 0;
}
