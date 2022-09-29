#include<stdio.h>
int mean(int a[]);
int median(int a[]);
void main()
{
    int a[5],i,m,n;
    printf("Enter 5 numbers=");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    m=mean(a);
    n=median(a);
    printf("MEAN= %d\n",m);
    printf("MEDIAN= %d",n);

}
int mean(int k[5])
{
    int sum=0,m;
    for(int i=0;i<5;i++)
    {
        sum=sum+k[i];
    }
    m=sum/5;
    return m;
}
int median(int k[5])
{
    int temp;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4-i;j++)
        {
                if(k[j]>k[j+1])
                {
                    temp=k[j];
                    k[j]=k[j+1];
                    k[j+1]=temp;
                }
        }
        
    }
    return k[2];
}