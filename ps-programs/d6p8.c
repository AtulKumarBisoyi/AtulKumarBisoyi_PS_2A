#include<stdio.h>
void main()
{
    //which are and which not
	int a[100],b[100],m,n,i,j,c=0;
    printf("Enter no. of elements in A= ");
    scanf("%d",&m);
    printf("Enter the elements= ");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter no. of elements in B= ");
    scanf("%d",&n);
    printf("Enter the elements= ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    //in both
    printf("Elements which are in both=\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                printf("%d ",a[i]);
            }
        }
    }
    printf("\n");
    //not in both
    printf("Elements which are not in both=\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                c++;
            }
        }
        if(c==0)
        {
            printf("%d ",a[i]);

        }
        c=0;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(b[i]==a[j])
            {
                c++;
            }
        }
        if(c==0)
        {
            printf("%d ",b[i]);

        }
        c=0;
    }   
}
