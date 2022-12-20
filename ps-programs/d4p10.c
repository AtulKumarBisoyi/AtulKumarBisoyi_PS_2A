#include<stdio.h>
int power(int,int);
void main()
{
    int a,b,s;
    printf("enter a,b= ");
    scanf("%d%d",&a,&b);
    s=power(a,b);
    printf("power= %d",s);

}

int power(int x,int n)
{
    int pow;
    if(n==0)
    {
        return 1;
    }
    pow=power(x,n/2); 
    if(n%2==0)
    {
        return (pow*pow);
    }
    else
        return (x*pow*pow);

}