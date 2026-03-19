#include<stdio.h>
#include<stdlib.h>
void strcopy(char * s,char * p)
{
    int i=0;
    while(s[i]!='\0')
    {
        p[i]=s[i];
        i++;
    }
    p[i]='\0';
}
int main()
{
    char a[100], b[100];
    scanf("%s",a);
    strcopy(a,b);
    printf("Copied String : %s",b);
}
