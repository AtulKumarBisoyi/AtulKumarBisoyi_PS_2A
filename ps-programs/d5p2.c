// N = 3, arr[] = {1,1,2} 
#include<stdio.h>
void main()
{
    int a[100],n,i,maxday;
    printf("No. of candles= ");
    scanf("%d",&n);
    printf("Enter size of all candles= ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    maxday=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>maxday)
        {
            maxday=a[i];
        }
    }
    printf("The maximum number of days the room is without darkness = %d \n ",maxday);
}