#include<stdio.h>
int factorial(int);
void main()
{
    int n,fact;
    printf("Enter n = ");
    scanf("%d",&n);
    fact=factorial(n);
    printf("%d",fact);
}
int factorial(int n)
{
    if(n==1)
        return 1;
    else
        return n*factorial(n-1);
}