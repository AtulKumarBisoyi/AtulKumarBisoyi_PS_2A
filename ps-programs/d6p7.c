#include<stdio.h>
void main()
{
	int a[100],n,s;
    printf("Enter no. of elements= ");
    scanf("%d",&n);
    printf("Enter the elements= ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    s=a[0];
    for (int i=1;i<n;i++)
		s=s^a[i];
    printf("Non repeating number= %d",s);
}
