#include<stdio.h>
#include<stdlib.h>
void increment (int n, int * a)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]+1);
    }
}
int main()
{
    printf("Enter the total no of elements");
    int n;
    scanf("%d",&n);
    int i;
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    increment(n,a);
    return 0;

}
