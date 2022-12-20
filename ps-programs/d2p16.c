#include <stdio.h>
void main()
{
    int n;
    printf("Enter the value of n=\n");
    scanf("%d", &n);
    int length = 2*n-1 , i,j;
    int a[length][length];
    int start = 0;
    int end = length - 1;
    printf("The pattern is \n");
    while (n != 0)
    {
        for (i = start; i <= end; i++)
        {
            for (j = start; j <= end; j++)
            {
                if (i == start || i == end || j == start || j == end)
                {
                    a[i][j] = n;
                }
            }
        }
        ++start;
        --end;
        --n;
    }
    for (i = 0; i < length; i++)
    {
        for (j = 0; j < length; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
}
