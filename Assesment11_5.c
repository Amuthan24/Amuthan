#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void copydata(int * dst,int*src , int size)
{
    memcpy(dst,src,size);
}
int main()
{
    int a;
    int b;
    printf("enter two integers");
    scanf("%d %d",&a,&b);
    copydata(&b,&a,sizeof(a));
    printf("%d %d",a,b);
}
