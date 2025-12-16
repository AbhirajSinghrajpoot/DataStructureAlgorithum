#include<stdio.h>
int main()
{
    int a[10],i,max,min;
    for(i=0;i<10;i++)
    {
    printf("enter the value : ");
    scanf("%d",&a[i]);
    }
    printf("array is :");
    for(i=0;i<10;i++)
    printf("\n %d",a[i]);
    {
     max=a[0];
     min=a[0];
     for(i=1;i<10;i++)
     {
         if(a[i]>max)
            max=a[i];
         if(a[i]<min)
            min=a[i];
     }
     printf("\n max value = %d and min value = %d",max,min);
     return 0;
     }
}