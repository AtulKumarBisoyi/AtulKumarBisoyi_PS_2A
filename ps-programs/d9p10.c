//count primes
#include<stdio.h>
void main()
{
    int n ,i,c=0,count=0;
    printf("Enter the number= ");
    scanf("%d",&n);
    if(n==0 || n==1)
    {
        count=0;
    }
    else
    {
        for(i=2;i<n;i++)
        {
            int num=i;
            for(int j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }

        if(c==1)
        {
            count++;
        }
        c=0;
        }
    }
    printf("No. of primes are = %d",count);
}