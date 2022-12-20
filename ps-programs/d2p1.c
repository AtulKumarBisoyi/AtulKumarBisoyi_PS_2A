#include<stdio.h>
void main(){
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%d ",j+i);
        }
        printf("\n");
    }
}