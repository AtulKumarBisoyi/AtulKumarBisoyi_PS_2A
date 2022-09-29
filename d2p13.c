#include<stdio.h>
void main()
{
    int n,j,a,i,k;
    printf("Enter N= ");
    scanf("%d",&n);
    
    for(i=n;i>=0;i=i-5)
   {
        printf("%d ",i);
        a=i;
   }

   if(a>0)
   {
     k=a-5;
     printf("%d ",k);
   }
   else
     k=a;
   
      for(i=k+5;i<=n;i=i+5)
   {
        printf("%d ",i);
   }
}