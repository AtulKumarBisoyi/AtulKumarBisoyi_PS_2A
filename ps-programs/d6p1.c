//90 degree rotation
#include<stdio.h>
void main()
{
    int a[100][100],b[100][100],i,j,m,n;
    printf("Enter row= ");
    scanf("%d",&m);
    printf("Enter column= ");
    scanf("%d",&n);
    printf("Enter the elements of the matrix = \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //transpose
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            b[i][j]=a[j][i];
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n/2;j++)
        {
            int temp=b[i][j];
            b[i][j]=b[i][n-j-1];
            b[i][n-j-1]=temp;
        }
    }
    printf("Matrix after rotating 90* clockwise \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

}