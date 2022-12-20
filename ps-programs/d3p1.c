#include<stdio.h>
void main(){
    int i,n,sum=0,fact=1;
    printf("Enter n =");
    scanf("%d",&n);
    printf("Sum=");
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+fact;
    }
    printf("%d",sum);
}