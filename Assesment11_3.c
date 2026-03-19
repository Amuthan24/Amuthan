#include<stdio.h>
#include<stdlib.h>
int * printloop(int n)
{
    int i;
    int *a;
    a=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        a[i]=i+1;
    }
    return a;
}
int main()
{
    int n;
    printf("enter the no of elements");
    scanf("%d",&n);
    int *b;
    b=printloop(n);
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\n",b[i]);
    }
}
