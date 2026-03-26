
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void strcont(char*src1,char *src2,char *dst)
{
    dst=strcat(src1,src2);
    printf("Concatenated string : \n");
    printf("%s",dst);


}
int main()
{
    char*a;
    a=(char*)malloc(100*sizeof(char));
    char*b;
    b=(char*)malloc(100*sizeof(char));
    char*c;
    int i;
    int s1,s2,size;
    printf("Enter string 1 : \n");
    scanf("%s",a);
    printf("Enter string 1 : \n");
    scanf("%s",b);
    s1=strlen(a);
    s2=strlen(b);
    size=s1+s2;
    c=(char *)calloc(size,sizeof(char));
    strcont(a,b,c);
    return 0;
}
