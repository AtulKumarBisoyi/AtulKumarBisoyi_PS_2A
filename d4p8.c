#include<stdio.h>
void main()
{
    int a,b,c[100],d[100],i,j,m=0,n=0,e[100],k=0;
    printf("Enter both number=");
    scanf("%d%d",&a,&b);
    printf("gcd of the two numbers=\n");
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            c[m]=i;
            m++;
        }
    }
    for(i=1;i<=b;i++)
    {
        if(b%i==0)
        {
            d[n]=i;
            n++;
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(c[i]==d[j])
            {
                e[k]=c[i];
                k++;
            }
        }
    }
   printf("%d",e[k-1]);
}