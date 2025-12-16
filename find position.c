#include<stdio.h>
int main()
{
    int a[10],i,pos,val;
    for(i=0;i<9;i++)
    {
        printf("enter the value : ");
        scanf("%d",&a[i]);
    }
    printf("\n enter position to insert: ");
    scanf("%d",&pos);
    printf("enter the value to insert: ");
    scanf("%d",&val);
    printf("original array is :");
    for(i=0;i<9;i++)
    {
       printf("%d",a[i]);
    }
    for(i=8;i>=pos-1;i--)
        a[pos-1]=val;
    printf("\n update value is: ");
    for(i=0;i<10;i++)
      printf("%d \t",a[i]);
    return 0;

}