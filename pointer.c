#include<stdio.h>
int main()
{
    int a,b,*p,*q,c;
    p=&a;
    q=&b;
    printf("\n enter two no. : ");
    scanf("\n%d%d",&a,&b);
    c=*p+*q;
    printf("addition = %d",c);
    return 0;
}