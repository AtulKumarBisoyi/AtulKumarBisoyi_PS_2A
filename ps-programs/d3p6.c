#include<stdio.h>
#include<math.h>
int factorial(int);
void main(){
    int i,n,x,sign=-1;
    float sum=0;
    printf("Enter n =");
    scanf("%d",&n);
    printf("Enter x =");
    scanf("%d",&x);
    for(i=2;i<=n;i++)
    {
        if(i%2==0)
        {
            sum=sum+ sign*(pow(x,i)/factorial(i));
            sign=sign*-1;
        }
        else{
            continue;
        }
    }
    printf("%f",1+sum);

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
