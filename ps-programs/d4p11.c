#include<stdio.h>
int fibbo(int,int,int);
void main()
{
    int n,i,x=0,next=1,r=0;
    printf("Enter n =");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        x=fibbo(i,next,r);
        
    }
    printf("%dth term of fibbonaci is = %d ",n,x);
}

int fibbo(int n,int next,int r)
{
    if(n==1)
    {
        return r;
    }
    else
    {
        return fibbo(n-1 ,(next+r),next); 
    }
}