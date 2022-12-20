#include<stdio.h>
void main()
{
    int a[100],n,i,mid,p=0,q=0,mul;
    printf("No. of elements= ");
    scanf("%d",&n);
    printf("Enter elements= ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    mid=n/2;
    if(n%2==0)
    {
        for(i=0;i<mid;i++)
        {
            p=p+a[i];
        }
        for(i=mid;i<n;i++)
        {
            q=q+a[i];
        }
    }
    else
    {
        for(i=0;i<=mid;i++)
        {
            p=p+a[i];
        }
        for(i=mid+1;i<n;i++)
        {
            q=q+a[i];
        }
    }
    mul=p*q;
    printf("Answer= %d ",mul);
}