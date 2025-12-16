#include<stdio.h>
int main()
{
    int a[10],i,key,count=0;
    for(i=0;i<10;i++)
      {
         printf("enter the number: ");
         scanf("%d",&a[i]);
      }
      printf("\nenter the no. to find frequency : ");
      scanf("%d",&key);
      for(i=0;i<10;i++)
           if(a[i]==key)
               count++;
    printf("frequency of %d is %d",key,count);
    return 0;
}