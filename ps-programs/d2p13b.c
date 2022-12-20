#include<stdio.h>
void minusfive(int);
void main()
{
    int n;
    printf("enter n=");
    scanf("%d",&n);
    minusfive(n);
}

void minusfive(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        minusfive(n-5);
    }
    printf("%d ",n);
}