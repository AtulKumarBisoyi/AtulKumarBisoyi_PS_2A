#include<stdio.h>
void main()
{
    int n,s;
    printf("Enter n = ");
    scanf("%d",&n);
    s=n;
    while(n>0)
    {
        if(n-1>0)
        {
            s=s*(n-1);
        }
        n=n-1;
    }
    printf("%d",s);
    while(1)
    {
        
    }
}