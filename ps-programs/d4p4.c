#include<stdio.h>
void main()
{
    int i,j,n,k,sum;
    printf("enter range= ");
    scanf("%d",&k);
    printf("All perfect number between the range = \n");
    for(i=1;i<=k;i++)
    {
        sum=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum=sum+j;
            }
        }
        if(i==sum)
        {
            printf("%d ",i);
        }
    }
}