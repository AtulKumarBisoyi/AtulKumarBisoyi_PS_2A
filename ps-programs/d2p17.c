// Input:
// N = 6
// Output:
// 1 121 12321 1234321 123454321 12345654321
#include<stdio.h>
void main()
{
    int n,i,j,k;
    printf("Enter n = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(k=i-1;k>=1;k--)
        {
            printf("%d",k);
        }
        printf(" ");
    }
}