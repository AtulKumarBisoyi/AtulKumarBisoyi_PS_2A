#include<stdio.h>
void main(){
   int i,j,k,m=1;
   for(i=1;i<=4;i++)
   {  m=i;
      for(k=4;k>=i;k--)
      {
         printf(" ");
      }
      for(j=1;j<=i;j++)
      {
         
         printf("%d ",m);
         m++;
      }
      printf("\n");
   }
}