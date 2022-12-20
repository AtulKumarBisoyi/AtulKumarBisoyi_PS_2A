#include<stdio.h>
void main()
{
    int a[100][100],m,n;
    int sumd1=0,sumd2=0,sumr=0,sumc=0,i,j,c=0;
    printf("Enter no. of row and column= \n ");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of a= \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    //checking magic matrix
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sumd1=sumd1+a[i][j];
            }
            if(i+j==m-1)
            {
                sumd2=sumd2+a[i][j];
            }
        }
    }
    if(sumd1!=sumd2)
    {
        c=1;
    }
    else
    {
        for(i=0;i<m;i++)
        {
            sumr=0;
            sumc=0;
            for(j=0;j<n;j++)
            {
                sumr=sumr+a[i][j];
                sumc=sumc+a[j][i];
            }
            if(sumr!=sumd1)
            {
                c=1;
            }
            else if(sumc!=sumd2)
            {
                c=1;
            }
            else
            {
                c=0;
            }
        }
    }
    if(c==0)
    {
        printf("The given matrix is a magic matrix");
    }
    else
    {
        printf("The given matrix is not a magic matrix");
    }

}