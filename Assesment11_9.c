#include<stdio.h>
#include<stdlib.h>
void intcont(int *src1,int size1,int *src2,int size2)
{
    int size;
    size=size1+size2;
    src1=(int*)realloc(src1,size*sizeof(int));
    int i,j=0;
    for(i=size1;i<size;i++)
    {
        while(j<size2)
        {
            src1[i]=src2[j];
            break;
        }
        j++;
    }
    printf("Concatenated Array : \n");
    for(i=0;i<size;i++)
    {
        printf("%d ",src1[i]);
    }

}
int main()
{
    int * a;
    int * b;
    int i;
    int n1,n2;
    printf("enter the no of elements for array 1: \n");
    scanf("%d",&n1);
    a=(int *)malloc(n1*sizeof(int));
    printf("Enter the array 1 elements \n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the no of elements for array 2: \n");
    scanf("%d",&n2);
    b=(int *)malloc(n2*sizeof(int));
    printf("Enter the array 2 elements \n");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    intcont(a,n1,b,n2);
    return 0;
}
