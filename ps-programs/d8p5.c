#include<stdio.h>
void main()
{
    int n,i,j,k,c=0;
    printf("Enter N = ");
    scanf("%d",&n);
    printf("1 ");
    for (i = 2; i <= n; i++)
    {

        for (j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                k = j;
                c++;
                if (c == 1)
                {
                    if (i % k == 0)
                    {
                        printf("%d ", k);
                        c = 0;
                        break;
                      
                    }
                }
                else
                {
                    c = 0;
                    continue;
                }
            }
        }
    }

}