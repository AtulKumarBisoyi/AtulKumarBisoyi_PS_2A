#include<stdio.h>
void main(){
    int i,j,k,a=0,m;
    for(i=6;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j );
        }
        
        for(k=1;k<=2*a-1;k++)
        {
            printf("  ");
        }
        a++;
        for( m=i;m>=1;m--)
        {   if(m==6);
            else
           
            printf("%d ",m);
        }
         printf("\n");
    }
}
