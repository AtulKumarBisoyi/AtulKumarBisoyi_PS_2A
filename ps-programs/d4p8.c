#include<stdio.h>
void gcd(int,int);
void main()
{
    int a,b;
    printf("Enter both number=");
    scanf("%d%d",&a,&b);
    printf("gcd of the two numbers=\n");
    gcd(a,b);
    
}
void gcd(int p,int q)
{ 
    int i,j, gcd;
    for(i=1;i<p;i++)
    {
        for( j=1;j<q;j++)
        {
            if(p%i==0 && q%i==0)
            {
                gcd=i;
            }
        }
    }
    printf("%d",gcd);
}