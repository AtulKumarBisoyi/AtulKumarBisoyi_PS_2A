#include<stdio.h>
void main()
{
    // In one step, if the current number is even, you have to divide it by 2, otherwise, you have to subtract 1 from it.
    int n,c=0,s;
    printf("Enter the number = ");
    scanf("%d",&n);
    while(n!=0)
    {
        if(n%2==0)
        {
            n=n/2;
            c++;
        }
        else
        {
            n=n-1;
            c++;
        }
    }
    printf("No. of steps = %d",c);

}