#include<stdio.h>
int main()
{
    int a[10],i,j,t;
    for(i=0;i<10;i++)
    {
        printf("\n enter the no. : ");
        scanf("%d",&a[i]);
    }
    printf("\n orginal value is : ");
    for(i=0;i<10;i++)
      printf("\n%d ",a[i]);
    for ( i = 0; i < 9; i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("\n sortd array is:");
    for(i=0;i<10;i++)
        printf("\n%d",a[i]);
    return 0;   
}