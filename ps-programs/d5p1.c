#include<stdio.h>
int chocolate(int [],int);
void main()
{
    int arr[100],n,i;
    printf("Enter the no. of squares= ");
    scanf("%d",&n);
    printf("Enter the taste levels=\n");
    for (i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    chocolate(arr,n);

}
int chocolate(int arr[],int n)
{
    int min,i;
    min=arr[0];
    for( i=0;i<n;i++)
    {
        if(min>arr[i]) 
        {
            min=arr[i];
        }      
    }
    printf("Her sister will get = %d",min);
}