#include<stdio.h>
void lcm(int,int);
void main()
{
    int a,b;
    printf("Enter two number= ");
    scanf("%d%d",&a,&b);
    printf("lcm of a and b=\n");
    lcm(a,b);   
}
void lcm(int p,int q)
{
    int i,j,c;
    for(i=1;i<=p*q;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(p*i==q*j)
                {
                    printf("%d ",p*i);
                    c=1;
                }  
            if(c==1)
            {
                break;
            }   
        }
    }
}