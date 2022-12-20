#include<stdio.h>
void main()
{
    int left,right,n,i,j,copy,a,c=0;
    printf("Enter the range = ");
    scanf("%d%d",&left,&right);
    for(i=left;i<=right;i++)
    {
        n=i;
        copy=i;
        while(n>0)
        {
            a=n%10;
            n=n/10;
            if(a!=0)
            {
                if(copy%a==0)
                {
                    c=1;
                    continue;
                }
                else
                {
                    c=0;
                    break;
                }
            }
            else
            {
                c=0;
                break;
            }
        }
        if(c==1)
        {
            printf("%d ",i);
        }
    }
}