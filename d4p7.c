#include<stdio.h>
int factorial(int);
void main()
{
    int i,j,n,c,a,sum=0;
    printf("Enter n= ");
    scanf("%d",&n);
    printf("Strong no. are=\n");
    for(i=1;i<=n;i++)
    {
        c=i;
        j=i;
        while(j>0)
        {
            a=j%10;
            sum=sum+factorial(a);
            j=j/10;
        }
        if(c==sum)
        {
            printf("%d ",c);
        }
        sum=0;
    }
}

int factorial(int k)
{
    int fact=1;
    for(int i=1;i<=k;i++)
    {
        fact=fact*i;
    }
    return fact;
}