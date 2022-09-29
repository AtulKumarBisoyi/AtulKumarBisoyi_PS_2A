#include<stdio.h>
void main()
{
    int a,b,i,j,c=0;
    printf("Enter two number= ");
    scanf("%d%d",&a,&b);
    printf("lcm of a and b=\n");
    for(i=1;i<=a*b;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(a*i==b*j)
                {
                    printf("%d ",a*i);
                    c=1;
                }  
            if(c==1)
            {
                break;
            }   
        }
    }
}