//98
#include<stdio.h>
void main()
{
    int n,a,s;
    printf("Enter n= ");
    scanf("%d",&n);
    while(n>9)
    {
        s=0;
        while (n>0)
        {
            a=n%10;
            s=s+a;
            n=n/10;
        }
        n=s;
    }
    
   printf("Number is = %d",n);
    
}