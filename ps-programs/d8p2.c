//Given two numbers A and B, find Kth digit from right of A to the power B.
#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,c=0,a,b,p,k;
    printf("Enter the number and its power = ");
    scanf("%d%d",&a,&b);
    printf("Enter k= ");
    scanf("%d",&k);
    p=pow(a,b);
    while(p>0 && c<k)
    {
        i=p%10;
        p=p/10;
        c++;
        if(c==k)
        {
            printf("the kth no. is = %d",i);
            break;
        }
        else
        {
            continue;
        }
    }
    if(c<k)
    {
        printf("-1");
    }

}