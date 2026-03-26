#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int compdata(char*dst,char*src)
{
    return strcmp(dst,src);
}
int main()
{
    char a[50];
    char b[50];
    int n;
    printf("enter string 1 :\n");
    scanf("%s",a);
    printf("enter string 2 :\n");
    scanf("%s",b);
    n=compdata(b,a);
    if(n==0)
    {
        printf("sucess");
    }
    else
    {
        printf("failure");
    }
}
