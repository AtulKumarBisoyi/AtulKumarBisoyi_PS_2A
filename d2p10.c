#include<stdio.h>
void main(){
    int i,j,k;
    for(i=1;i<=3;i++)
    {
        for(k=1;k>=3-i;k--)
        {
            printf(" ");
        }
        for(j=5;j>=2*i-1;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=2;i++)
    {
        for(k=1;k<=2-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}