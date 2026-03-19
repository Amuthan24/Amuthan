#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    int *p;
    p=&a;
    printf("Orginal Number :%d\n",*p);
    printf("Updated Number using pointer :%d",*p+1);
}

