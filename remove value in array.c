#include<stdio.h>
int main()
{
    int a[10],i,val,flag=0;
    for(i=0;i<10;i++)
    {
        printf("enter the value : ");
        scanf("%d",&a[i]);
    }
    printf("\n enter the remove value : ");
    scanf("%d",&val);
    printf("\n orginal value is : ");
    for(i=0;i<10;i++)
      printf("%d \t",a[i]);
    for(i=0;i<10;i++)
    {
        if(a[i]==val)
           {
            flag=1;
            break;
           }
        }
        if(flag==0)
          printf("\n element not found ");
        else
        {
            for( ;i<10;i++)
               a[i]=a[i+1];
        printf("\n modified array is : ");
        for(i=0;i<9;i++)
           printf("\n%d ",a[i]);
        }
        return 0;
}
