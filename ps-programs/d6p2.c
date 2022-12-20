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

    for(i=0;i<m/2;i++)
    {
        for(j=0;j<n;j++)
        {
            int temp=b[i][j];
            b[i][j]=b[n-i-1][j];
            b[m-i-1][j]=temp;
        }
    }
    printf("Matrix after rotating 90* anticlockwise \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

}