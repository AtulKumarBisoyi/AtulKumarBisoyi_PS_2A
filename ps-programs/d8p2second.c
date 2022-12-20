#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,k,t,p;
    printf("Enter a,b = ");
    scanf("%d%d",&a,&b);
    printf("Enter k = ");
    scanf("%d",&k);
    p=pow(a,b);
    t=p/pow(10,k-1);
    t=t%10;
    printf("%d",t);

}