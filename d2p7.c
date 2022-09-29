#include<stdio.h>
void main(){
    int i,j,k,m;
    for (i=1;i<=4; i++)
    {
        for(k=1;k<=4-i;k++)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        for(m=2;m<=i;m++)
        {
            printf("%d",m);
        }
        printf("\n");
    }
   
    
}