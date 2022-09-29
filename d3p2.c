#include<stdio.h>
int factorial(int);
void main(){
    int n;
    printf("Enter n= ");
    scanf("%d",&n);
    factorial(n);
}
int factorial(int x)
{
    int sum=0,fact=1;
    for(int i=1;i<=x;i++)
    {
        fact=fact*i;
        sum=sum+ fact/i;

    }
    printf("%d",sum);
}