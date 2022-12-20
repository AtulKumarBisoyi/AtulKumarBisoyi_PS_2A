#include<stdio.h>
void main()
{
    int i,j,sum=0,n,a,c;
    printf("Enter range= ");
    scanf("%d",&n);
    printf("Armstrong numbers are =\n");
    for(i=1;i<=n;i++)
    {
        c=i;
        j=i;
        while(j>0)
        {
            a=j%10;
            sum=sum*10+a;
            j=j/10;
        }
        if(c==sum)
        {
            printf("%d ",c);
        }
        sum=0;
    }
}