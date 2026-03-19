 #include <stdio.h>

int main() {
    int a[5], i,pos,key,flag;

    // Input 10 values into the array
    for (i = 0; i < 5; i++) {
        printf("Enter the value: ");
        scanf("%d", &a[i]);
    }
    printf("\nenter the no. of search: ");
    scanf("%d",&key);
    flag =0;
    for(i=0;i<5;i++)
    {
        if(a[i]==key)
        {
            flag=1;
            pos=i+1;
            break;
        }
    }
    if(flag==0)
       printf("element not found ");
    else
       printf("\n element found at %d position",pos);
    return 0;
}
