#include<stdio.h>
int main()
{
    int a[10],i,key,j,index=10;
    for(i=0;i<10;i++)
    {
        printf("enter the value : ");
        scanf("%d",&a[i]);
    }
    printf("\n original array is : ");
    for(i=0;i<10;i++)
        printf("\n %d",a[i]);
    printf("enter the remove element : ");
    scanf(" %d",&key);
    for(i=0;i<index;i++)
        {
            if(a[i]==key)
            {
                for(j=i;j<index-1;j++)
                    a[j]=a[j+1];
                index--;
                i--;
            }
        }
        printf("\n update array : ");
        for(i=0;i<index;i++)
            printf("\n %d",a[i]);
        return 0;
}