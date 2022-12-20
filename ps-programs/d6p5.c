//spiral matrix
#include<stdio.h>
void main()
{
    int a[100][100],top,bottom,left,right,i,j,m,n;
    printf("Enter row and coloumn= ");
    scanf("%d%d",&m,&n); 
    printf("Enter the elements=\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    top=left=0;
    right=bottom=n-1;
    for(i=top;i<=right;i++)
    {
        printf("%d ",a[top][i]);
    }
    top++;
    for(i=top;i<=bottom;i++)
    {
        printf("%d ",a[i][bottom]);
    }
    right--;
    for(i=right;i>=left;i--)
    {
        printf("%d ",a[bottom][i]);
    }
    bottom--;
    for(i=left;i<=right;i++)
    {
        printf("%d ",a[bottom][i]);
    }

}