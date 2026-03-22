 #include <stdio.h>

int main() {
    int a[10], i,j,pos,key,flag,mid;

    // Input 10 values into the array
    for (i = 0; i < 10; i++) {
        printf("Enter the value: ");
        scanf("%d", &a[i]);
    }
    printf("\n enter no. to search : ");
    scanf("%d",&key);
    i=0;
    j=9;
    flag=0;
    while(i<=j)
       {
         mid=(i+j)/2;
         if(a[mid]==key)
            {
                flag=1;
                pos=mid+1;
                break;
            }
            if(a[mid]>key)
               j=mid-1;
            if(a[mid]<key)
               i=mid+1;
       }
       if(flag==1)
          printf("\n element found at %d position",pos);
        else 
          printf("\n element not found");
        return 0;
}