#include<stdio.h>
#include<stdlib.h>
int main()
    {
        int n,*ptr,i;
        printf("\n how many element?");
        scanf("%d",&n);
        ptr=(int*)malloc(n*sizeof(int));
        for(i=0;i<n;i++)
        {
            printf("\n enter the value: ");
            scanf("%d",(ptr+i));
        }
        printf("\nn array element are: ");
        for ( i = 0; i < n; i++)
            printf("\n%d",*(ptr+i));
        return 0;   
    }
