#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int compdata(int * dst,int*src , int size)
{
    return memcmp(dst,src,size);
}
int main()
{
    int a;
    int b;
    int n;
    printf("enter two integers");
    scanf("%d %d",&a,&b);
    n=compdata(&b,&a,sizeof(a));
    if(n==0)
    {
        printf("sucess");
    }
    else
    {
        printf("failure");
    }
}
