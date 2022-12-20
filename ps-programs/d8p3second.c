#include<stdio.h>
void main()
{
    int n,a,s;
    printf("Enter n= ");
    scanf("%d",&n);
    if(n%9==0)
    {
        printf("9");
    }
    else{
        printf("%d",n%9);
    }
}