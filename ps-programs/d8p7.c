#include<stdio.h>
void main()
{
    int n,i,j,c=0;
    printf("Enter the number = ");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            for(j=2;j<=i;j++)
            {
                if(i%j==0)
                {
                    c++;
                }
            }
            if(c==1)
            {
                printf("%d ",i);
                c=0;
            }
            
        }
    }
}