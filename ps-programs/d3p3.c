#include<stdio.h>
#include<math.h>
void main(){
    int i,n,x,fact=1;
    float sum=0;
    printf("Enter n =");
    scanf("%d",&n);
    printf("Enter x =");
    scanf("%d",&x);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+(pow(x,i)/fact);
    }
    printf("%f",1+sum);
}