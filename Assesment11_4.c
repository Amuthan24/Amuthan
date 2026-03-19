#include<stdio.h>
#include<stdlib.h>
int * find_two_digit_odd_sum7 (int size, int * p, int * count)
{
    int *b=(int *)malloc(size*sizeof(int));
    int i,j=0;
    int n;
    for(i=0;i<size;i++)
    {
        if(p[i]>=10 && p[i]<=99 && p[i]%2!=0)
        {
            n=p[i];
            int u_digit;
            int s=0;
            while(n>0)
            {
                u_digit=n%10;
                s=u_digit+s;
                n=n/10;
            }
            if(s==7)
            {
                b[j]=p[i];
                j++;
                (*count)++;
            }
        }
    }
    return b;
}
int main()
{

    int size;
    int i;
    printf("Enter the no of elements:");
    scanf("%d",&size);
    int a[size];
    int count=0;
    printf("Enter the array elemts:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    int *res;
    res=find_two_digit_odd_sum7(size,a,&count);
    printf("resulted array\n");
    for(i=0;i<count;i++)
    {
        printf("%d\n",res[i]);
    }
}
