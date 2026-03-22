#include<stdio.h>
#include<stdlib.h>
int main()
    {
        int n,*ptr,*ptr1;
        printf("\n how many element to store: ");
        scanf("%d",&n);
        ptr=(int*)malloc(n*sizeof(int));
        ptr1=(int*)calloc(n,sizeof(int));
        free(ptr);
        printf("\n memory by malloc de-allocate ptr ");
        free(ptr1);
        printf("\n memory by calloc de-allocate ptr1");

        return 0;   
    }
