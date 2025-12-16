#include<stdio.h>
int main()
{
    int a[10],i,max;
    for(i=0;i<10;i++)
    {
     printf("enterthe value : ");
     scanf("%d",&a[i]);
    }
    printf("\n array is : ");
    for (i=0;i<10;i++)
    printf("\n %d",a[i]);
    {
     max=a[0];
     for(i=1;i<10;i++)
     {
        if (a[i]>max)
            max=a[i];
     }
     printf("\nmax value : %d",max);
     return 0;
    }
}
    

