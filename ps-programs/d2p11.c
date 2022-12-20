#include<stdio.h>
void main(){
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(k=8;k>=2*i;k--)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}