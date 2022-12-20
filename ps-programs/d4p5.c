#include<stdio.h>
void prime(int,int);
void main()
{
    int s,l,i,j,a;
    printf("Enter the interval= ");
    scanf("%d%d",&s,&l);
    printf("Prime Numbers are= \n");
    prime(s,l);
    
}

void prime(int m,int n)
{
    int s,l,c=0;
    for(int i=m;i<=n;i++)
    {
        c=0;
        for(int j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                c=c+1;
            }
        }
        if(c==1)
        {
            printf("%d ",i);
        }
        else
        continue;
    }
}