#include<stdio.h>
void main()
{
    int i,n,a,s=0;
    printf("Enter the number= ");
    scanf("%d",&n);
    while(n>0)
    {
        a=n%10;
        s=s*10+a;
        n=n/10;
    }
    printf("Palindrome is = %d",s);
}