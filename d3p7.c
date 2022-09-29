#include<stdio.h>
#include<math.h>
int factorial(int);
void main(){
    int n,sign=1,m=1;
    float sum=0,a,b,p,i;
    printf("Enter n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   
        p=factorial(m);
        a=i/p;
        b=sign*a;
        sum=sum+b;
        sign=sign*(-1);
        m=m+2;
        
    }
    printf("%f",sum);

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